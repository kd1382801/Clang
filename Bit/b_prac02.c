#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Skil_Num 4	//スキル数
#define Mob_Num 3	//敵の数
#define File_Num 3	//データファイル数

typedef unsigned int UINT;//符号なし整数をUINTで再定義

typedef struct {	//Skill型構造体
	char name[20];	//スキル名
	int type;		//スキルの種類
	int use_mp;		//使用MP量
	int effect;		//スキル効果
} Skill;

typedef struct {	//Spec型構造体
	char name[20];	//名前
	int hp;			//HP
	int atk;		//攻撃力
	int def;		//防御力
	UINT state;		//状態
} Spec;

typedef struct {	//Chara型構造体
	Spec sp;		//Spec型構造体
	int maxhp;		//最大HP
	int mp;			//MP
	Skill skl[Skil_Num];//Skill型構造体配列
} Chara;

typedef struct {	//Mob型構造体
	Spec sp;		//Spec型構造体
	int rate;		//状態異常攻撃発生レート%表記
}Mob;

enum BitState
{
	Base      = 0,			//0000 0000 0000 0000 通常状態
	Poison    = 1 << 0,		//0000 0000 0000 0001 どく状態
	Sleep     = 1 << 1,		//0000 0000 0000 0010 ねむり状態
	Paralysis = 1 << 2,		//0000 0000 0000 0100 まひ状態
	Burn      = 1 << 3,		//0000 0000 0000 1000 やけど状態
	AtkDown   = 1 << 5,		//0000 0000 0010 0000 攻撃力ダウン状態
	Dead      = 1 << 6,		//0000 0000 0100 0000 死亡フラグ
	Atk_Skill = 1 << 7,		//0000 0000 1000 0000 このフラグがONのキャラしか異常状態を付加できない
							//   バフ系|デバフ系
	AtkUp     = 1 << 8,		//0000 0001 0000 0000 攻撃力アップ状態
	DefUp     = 1 << 9,		//0000 0010 0000 0000 防御力アップ状態
	DeBuff    = 0xff		//0000 0000 1111 1111 
};

int TurnCount = 0;	//経過ターン(0～999)

//void ChangeFlag(UINT* s);
//void ClearFlag(UINT* s);

//状態を表示
void DisplayStatus(Chara s);
//戦闘モードへ移行する関数
void BattleMode(Chara* c, Mob m);
//戦闘時のメニュー表示
int DisplayMenu(void);
//スキル使用時のメニュー表示
int SkillMenu(Chara c);
//攻撃側と防御側のパラメータを使った攻撃ダメージ計算
int DamageCalc(Spec sp1, Spec sp2);
//戦闘モード時のHP計算と死亡判定
void BattleMessage(Spec sp1, Spec* sp2);
//データファイルを読み込んで値を設定する
int LoadDataFile(char* filename[], Chara* c, Mob* m);


main(int argc,char *argv[])
{
	srand(time(0));
	Chara chara;
	Mob mob[Mob_Num];
	char* DataFile[] = { "chara.csv","skill.csv","mob.csv" };

	int result;
	result = LoadDataFile(DataFile, &chara, mob);
	//ファイルの読み込みが失敗したら強制終了させる
	if (result == -1) {
		printf("致命的なエラーが発生しました\n");
		return;
	}
	int num = rand() % Mob_Num;
	//実行時に引数があった場合
	if (argc > 1) {
		//数値に変換
		num = atoi(argv[1]);
		//引数の数値が0～Mob_Num-1の範囲になければ
		if (num < 0 || num >= Mob_Num) {
			//乱数を生成
			num = rand() % Mob_Num;
		}
	}

	//戦闘モードを開始
	BattleMode(&chara, mob[num]);
	if (chara.sp.state & Dead) {
		printf("%sの死亡によりゲームオーバー\n", chara.sp.name);
	}
}

int DamageCalc(Spec sp1, Spec sp2) {
	int damage;
	//攻撃力ダウンフラグがONで、Atk_SkllがOFFのとき(自キャラのみ)
	if ((sp1.state & AtkDown) && !(sp1.state & Atk_Skill)) {
		//攻撃力0.8倍
		sp1.atk *= 0.8;
	}
	damage = sp1.atk * ((float)sp1.atk / sp2.def) + sp1.atk * (rand() % 50) / 100.0;
	//100分の1の確率で会心/痛恨の一撃
	if (rand() % 100 == 99) {
		//ダメージ量2倍
		return 2 * damage;
	}
	//通常ダメージ
	return damage;
}

void BattleMessage(Spec sp1, Spec* sp2) {
	int damage;
	TurnCount++;
	printf("%sの攻撃\n", sp1.name);
	damage = DamageCalc(sp1, *sp2);
	printf("%sに%dのダメージ\n\n", sp2->name, damage);
	sp2->hp -= damage;
	if (sp2->hp <= 0) {
		printf("%sは倒された\n", sp2->name);
		sp2->state |= Dead;
	}
}

void BattleMode(Chara* c, Mob m) {
	#define Poison_Damage 0.8
	#define Burn_Damage 0.9
	//static const Burn_Damage = 0.9;
	int command, skill;
	system("cls");	//コマンドプロンプトのcls命令の実行
	DisplayStatus(*c);
	printf("%sがあらわれた！\n", m.sp.name);
	while (1) {
		command = DisplayMenu();
		if (c->sp.state & Poison) {
			c->sp.hp *= Poison_Damage;
		}
		if (c->sp.state & Burn) {
			c->sp.hp *= Burn_Damage;
			c->mp *= Burn_Damage;
		}
		//たたかう
		if (command == 1) {
			DisplayStatus(*c);
			//TurnCountが偶数の時は自キャラの攻撃
			if (TurnCount % 2 == 0) {
				BattleMessage(c->sp, &m.sp);
				if (m.sp.state & Dead) {
					break;
				}
			}
			//TurnCountが奇数の時は敵の攻撃
			if (TurnCount % 2 == 1) {
				BattleMessage(m.sp, &c->sp);
				if (c->sp.state & Dead) {
					break;
				}
				//自キャラが死んでいなければ以下の処理を実行
				else {
					//状態異常付加確率の計算
					if (rand() % 100 < m.rate) {
						printf("状態異常攻撃を受けた！\n");
						//自キャラに状態異常を付加するときには、Atk_Skillフラグを除去しておく
						c->sp.state |= (m.sp.state & ~Atk_Skill);
					}
					DisplayStatus(*c);
				}
			}
		}
		else if (command == -1) {
			c->sp.state |= Dead;
			return;
		}
		//スキル
		else if (command == 2) {
			printf("スキルの選択\n");
			skill = SkillMenu(*c);
			//MP残量チェック
			if (c->mp >= c->skl[skill].use_mp) {
				//MPを減らす
				c->mp -= c->skl[skill].use_mp;
				switch (c->skl[skill].type)
				{
				case 0:
					//HPを回復
					c->sp.hp += c->skl[skill].effect;
					//回復量がMaxHPを超えないように
					if (c->sp.hp > c->maxhp) { 
						c->sp.hp = c->maxhp;
					}
					printf("HPを%d回復した！\n", c->skl[skill].effect);
					break;
				case 1://攻撃力アップの処理
					//atkを1.20倍
					c->sp.atk *= c->skl[skill].effect / 100.0;
					//攻撃力アップフラグON
					c->sp.state |= AtkUp;
					printf("攻撃力がアップした！\n");
					break;
				case 2://状態異常回復の処理
					//攻撃力アップは異常ではないので残す(DefUpスキルを実装すると使えない)
					/*if (c->sp.state & AtkUp) {
						//状態変化をリセット
						c->sp.state = Base;
						//攻撃力アップを再度付加
						c->sp.state |= AtkUp;
					}
					else {
						//状態変化をリセット
						c->sp.state = Base;
					}*/
					//対策１.バックアップを取って処理をする
					/*UINT backup = Base;
					if (c->sp.state & AtkUp) {
						backup |= AtkUp;
					}
					if (c->sp.state & DefUp) {
						backup |= DefUp;
					}
					c->sp.state = Base;
					c->sp.state |= backup;*/
					//対策２.リファクタリングをする(フラグビットを整理する)
					c->sp.state &= ~DeBuff;
					printf("状態異常が回復した！\n");
					break;
				case 3://防御力アップの処理
					//defを1.5倍
					c->sp.def *= c->skl[skill].effect / 100.0;
					//防御力アップフラグON
					c->sp.state |= DefUp;
					printf("防御力がアップした！\n");
					break;
				default:
					break;
				}
				//自キャラのステータスを表示
				DisplayStatus(*c);
			}
			else{
				printf("MPが足りない！\n");
			}
		}
	}
}

void DisplayStatus(Chara c) {
	printf("********************\n");
	printf("HP:%-4d  MP:%-3d\n", c.sp.hp, c.mp);

	if (c.sp.state) {
		printf("状態:");

		if (c.sp.state & Poison) {
			printf("毒 ");
		}
		if (c.sp.state & Sleep) {
			printf("睡眠 ");
		}
		if (c.sp.state & Paralysis) {
			printf("麻痺 ");
		}
		if (c.sp.state & Burn) {
			printf("火傷 ");
		}
		if (c.sp.state & AtkUp) {
			printf("攻撃力アップ ");
		}
		if (c.sp.state & AtkDown) {
			printf("攻撃力ダウン ");
		}
		if (c.sp.state & DefUp) {
			printf("防御力アップ ");
		}
	}
	printf("\n********************\n");
}

int DisplayMenu(void) {
	char ch;

	while (1){
		printf("---------------\nコマンドを選択\n");
		printf("1.たたかう\n2.スキル\n3.ぼうぎょ\n\n");
		ch = getch();
		if (ch > '0' && ch < '4') {
			return ch - '0';
		}
		else if (ch == 'q') {	//隠しコマンド:強制終了'q'
			return -1;
		}
	}
}

int SkillMenu(Chara c) {
	int ch, i;

	while (1){
		printf("---------------\nスキルを選択\n");
		for (i = 0; i < Skil_Num; i++) {
			printf("%d.%s\n", i + 1, c.skl[i].name);
		}
		printf("\n");
		ch = getch() - '0';
		if (ch > 0 && ch <= Skil_Num) {
			return ch - 1;
		}
	}
}



void ChangeFlag(UINT* s) {
	int a;

	while (1) {
		printf("どの状態にしますか？\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 0:入力終了>");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:
			break;
		}
	}
}

void ClearFlag(UINT* s) {
	int a;

	while (1)
	{
		printf("どの状態を解除しますか？\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 7:全回復 0:入力終了>");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a)
		{
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s = Base;
			break;
		default:
			break;
		}
	}
}

int LoadDataFile(char* filename[], Chara* c, Mob* m) {
	FILE* fp;
	int i;
	for (i = 0; i < File_Num; i++) {
		if (fp = fopen(filename[i], "r")) {
			switch (i){
			case 0:
						//name, hp, atk, def, state, maxhp, mp
				fscanf(fp, "%[^,],%d,%d,%d,%u,%d,%d", c->sp.name, &c->sp.hp, &c->sp.atk, &c->sp.def, &c->sp.state, &c->maxhp, &c->mp);
				//%[^,]:^の後に書いた記号の手前までを文字列として読み取る
				break;
			case 1:
				for (int j = 0; j < Skil_Num; j++) {
					//name, type, use_np, effect
					fscanf(fp, "%[^,],%d,%d,%d\n", c->skl[j].name, &c->skl[j].type, &c->skl[j].use_mp, &c->skl[j].effect);
				}
				break;
			case 2:
				for (int j = 0; j < Mob_Num; j++) {
					//name, hp, atk, def, state, rate
					fscanf(fp, "%[^,],%d,%d,%d,%u,%d\n", (m + j)->sp.name, &(m + j)->sp.hp, &(m + j)->sp.atk, &(m + j)->sp.def, &(m + j)->sp.state, &(m + j)->rate);
				}
				break;
			}
			fclose(fp);
		}
		else {
			printf("ファイルを開けません！\n");
			return -1;
		}
	}
	return 0;
}

