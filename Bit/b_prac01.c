#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Skil_Num 3
#define Mob_Num 3

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
	Base = 0,			//00000000 通常状態
	Poison = 1 << 0,	//00000001 どく状態
	Sleep = 1 << 1,		//00000010 ねむり状態
	Paralysis = 1 << 2,	//00000100 まひ状態
	Burn = 1 << 3,		//00001000 やけど状態
	AtkUp = 1 << 4,		//00010000 攻撃力アップ状態
	AtkDown = 1 << 5,	//00100000 攻撃力ダウン状態
	Dead = 1 << 6,		//01000000 死亡フラグ
	Atk_Skill = 1 << 7	//10000000 このフラグがONのキャラしか異常状態を付加できない
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



main(int argc,char *argv[])
{
	srand(time(0));
	//				  name    hp  atk def state maxhp  mp
	Chara chara = { "主人公",2000,200,100,Base, 2000, 150,
		// sk.name     type usemp effect
		{{"HP回復",      0,   50,  800},
		 {"攻撃力アップ",1,   50,  120}
		 {"状態異常回復",2,   20,    0}} };

	Mob mob[Mob_Num] = {
		//name    hp atk def  state             rate%
		{"敵A",  700,150,800,Poison  | Atk_Skill,30},
		{"敵B", 1500,200,200,Burn    | Atk_Skill,30},
		{"ボス",5000,200, 80,AtkDown | Atk_Skill,10} };

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
	//攻撃力ダウンフラグがONで、Atk_SkllがOFFのとき(主人公のみ)
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
	damage = DamageCalc(sp1, sp2);//*sp2
	printf("%sに%dのダメージ\n\n", sp2->name, damage);
	sp2->hp -= damage;
	if (sp2->hp <= 0) {
		printf("%sは倒された\n", sp2->name);
		sp2->state |= Dead;
	}
}

void BattleMode(Chara* c, Mob m) {
	int command, skill;
	system("cls");	//コマンドプロンプトのcls命令の実行
	DisplayStatus(*c);
	printf("%sがあらわれた！\n", m.sp.name);
	while (1) {
		command = DisplayMenu();
		if (c->sp.state & Poison) {
			c->sp.hp *= 0.8;
		}
		if (c->sp.state & Burn) {
			c->sp.hp *= 0.9;
			c->mp *= 0.9;
		}
		//たたかう
		/*if (command == 1) {
			DisplayStatus(*c);
			if(TurnCount % 2 == 0)
		}*/
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
	}
	printf("\n********************\n");
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


int DisplayMenu(void) {

}

int SkillMenu(Chara c) {

}


