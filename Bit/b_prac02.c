#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Skil_Num 4	//�X�L����
#define Mob_Num 3	//�G�̐�
#define File_Num 3	//�f�[�^�t�@�C����

typedef unsigned int UINT;//�����Ȃ�������UINT�ōĒ�`

typedef struct {	//Skill�^�\����
	char name[20];	//�X�L����
	int type;		//�X�L���̎��
	int use_mp;		//�g�pMP��
	int effect;		//�X�L������
} Skill;

typedef struct {	//Spec�^�\����
	char name[20];	//���O
	int hp;			//HP
	int atk;		//�U����
	int def;		//�h���
	UINT state;		//���
} Spec;

typedef struct {	//Chara�^�\����
	Spec sp;		//Spec�^�\����
	int maxhp;		//�ő�HP
	int mp;			//MP
	Skill skl[Skil_Num];//Skill�^�\���̔z��
} Chara;

typedef struct {	//Mob�^�\����
	Spec sp;		//Spec�^�\����
	int rate;		//��Ԉُ�U���������[�g%�\�L
}Mob;

enum BitState
{
	Base      = 0,			//0000 0000 0000 0000 �ʏ���
	Poison    = 1 << 0,		//0000 0000 0000 0001 �ǂ����
	Sleep     = 1 << 1,		//0000 0000 0000 0010 �˂ނ���
	Paralysis = 1 << 2,		//0000 0000 0000 0100 �܂Џ��
	Burn      = 1 << 3,		//0000 0000 0000 1000 �₯�Ǐ��
	AtkDown   = 1 << 5,		//0000 0000 0010 0000 �U���̓_�E�����
	Dead      = 1 << 6,		//0000 0000 0100 0000 ���S�t���O
	Atk_Skill = 1 << 7,		//0000 0000 1000 0000 ���̃t���O��ON�̃L���������ُ��Ԃ�t���ł��Ȃ�
							//   �o�t�n|�f�o�t�n
	AtkUp     = 1 << 8,		//0000 0001 0000 0000 �U���̓A�b�v���
	DefUp     = 1 << 9,		//0000 0010 0000 0000 �h��̓A�b�v���
	DeBuff    = 0xff		//0000 0000 1111 1111 
};

int TurnCount = 0;	//�o�߃^�[��(0�`999)

//void ChangeFlag(UINT* s);
//void ClearFlag(UINT* s);

//��Ԃ�\��
void DisplayStatus(Chara s);
//�퓬���[�h�ֈڍs����֐�
void BattleMode(Chara* c, Mob m);
//�퓬���̃��j���[�\��
int DisplayMenu(void);
//�X�L���g�p���̃��j���[�\��
int SkillMenu(Chara c);
//�U�����Ɩh�䑤�̃p�����[�^���g�����U���_���[�W�v�Z
int DamageCalc(Spec sp1, Spec sp2);
//�퓬���[�h����HP�v�Z�Ǝ��S����
void BattleMessage(Spec sp1, Spec* sp2);
//�f�[�^�t�@�C����ǂݍ���Œl��ݒ肷��
int LoadDataFile(char* filename[], Chara* c, Mob* m);


main(int argc,char *argv[])
{
	srand(time(0));
	Chara chara;
	Mob mob[Mob_Num];
	char* DataFile[] = { "chara.csv","skill.csv","mob.csv" };

	int result;
	result = LoadDataFile(DataFile, &chara, mob);
	//�t�@�C���̓ǂݍ��݂����s�����狭���I��������
	if (result == -1) {
		printf("�v���I�ȃG���[���������܂���\n");
		return;
	}
	int num = rand() % Mob_Num;
	//���s���Ɉ������������ꍇ
	if (argc > 1) {
		//���l�ɕϊ�
		num = atoi(argv[1]);
		//�����̐��l��0�`Mob_Num-1�͈̔͂ɂȂ����
		if (num < 0 || num >= Mob_Num) {
			//�����𐶐�
			num = rand() % Mob_Num;
		}
	}

	//�퓬���[�h���J�n
	BattleMode(&chara, mob[num]);
	if (chara.sp.state & Dead) {
		printf("%s�̎��S�ɂ��Q�[���I�[�o�[\n", chara.sp.name);
	}
}

int DamageCalc(Spec sp1, Spec sp2) {
	int damage;
	//�U���̓_�E���t���O��ON�ŁAAtk_Skll��OFF�̂Ƃ�(���L�����̂�)
	if ((sp1.state & AtkDown) && !(sp1.state & Atk_Skill)) {
		//�U����0.8�{
		sp1.atk *= 0.8;
	}
	damage = sp1.atk * ((float)sp1.atk / sp2.def) + sp1.atk * (rand() % 50) / 100.0;
	//100����1�̊m���ŉ�S/�ɍ��̈ꌂ
	if (rand() % 100 == 99) {
		//�_���[�W��2�{
		return 2 * damage;
	}
	//�ʏ�_���[�W
	return damage;
}

void BattleMessage(Spec sp1, Spec* sp2) {
	int damage;
	TurnCount++;
	printf("%s�̍U��\n", sp1.name);
	damage = DamageCalc(sp1, *sp2);
	printf("%s��%d�̃_���[�W\n\n", sp2->name, damage);
	sp2->hp -= damage;
	if (sp2->hp <= 0) {
		printf("%s�͓|���ꂽ\n", sp2->name);
		sp2->state |= Dead;
	}
}

void BattleMode(Chara* c, Mob m) {
	#define Poison_Damage 0.8
	#define Burn_Damage 0.9
	//static const Burn_Damage = 0.9;
	int command, skill;
	system("cls");	//�R�}���h�v�����v�g��cls���߂̎��s
	DisplayStatus(*c);
	printf("%s�������ꂽ�I\n", m.sp.name);
	while (1) {
		command = DisplayMenu();
		if (c->sp.state & Poison) {
			c->sp.hp *= Poison_Damage;
		}
		if (c->sp.state & Burn) {
			c->sp.hp *= Burn_Damage;
			c->mp *= Burn_Damage;
		}
		//��������
		if (command == 1) {
			DisplayStatus(*c);
			//TurnCount�������̎��͎��L�����̍U��
			if (TurnCount % 2 == 0) {
				BattleMessage(c->sp, &m.sp);
				if (m.sp.state & Dead) {
					break;
				}
			}
			//TurnCount����̎��͓G�̍U��
			if (TurnCount % 2 == 1) {
				BattleMessage(m.sp, &c->sp);
				if (c->sp.state & Dead) {
					break;
				}
				//���L����������ł��Ȃ���Έȉ��̏��������s
				else {
					//��Ԉُ�t���m���̌v�Z
					if (rand() % 100 < m.rate) {
						printf("��Ԉُ�U�����󂯂��I\n");
						//���L�����ɏ�Ԉُ��t������Ƃ��ɂ́AAtk_Skill�t���O���������Ă���
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
		//�X�L��
		else if (command == 2) {
			printf("�X�L���̑I��\n");
			skill = SkillMenu(*c);
			//MP�c�ʃ`�F�b�N
			if (c->mp >= c->skl[skill].use_mp) {
				//MP�����炷
				c->mp -= c->skl[skill].use_mp;
				switch (c->skl[skill].type)
				{
				case 0:
					//HP����
					c->sp.hp += c->skl[skill].effect;
					//�񕜗ʂ�MaxHP�𒴂��Ȃ��悤��
					if (c->sp.hp > c->maxhp) { 
						c->sp.hp = c->maxhp;
					}
					printf("HP��%d�񕜂����I\n", c->skl[skill].effect);
					break;
				case 1://�U���̓A�b�v�̏���
					//atk��1.20�{
					c->sp.atk *= c->skl[skill].effect / 100.0;
					//�U���̓A�b�v�t���OON
					c->sp.state |= AtkUp;
					printf("�U���͂��A�b�v�����I\n");
					break;
				case 2://��Ԉُ�񕜂̏���
					//�U���̓A�b�v�ُ͈�ł͂Ȃ��̂Ŏc��(DefUp�X�L������������Ǝg���Ȃ�)
					/*if (c->sp.state & AtkUp) {
						//��ԕω������Z�b�g
						c->sp.state = Base;
						//�U���̓A�b�v���ēx�t��
						c->sp.state |= AtkUp;
					}
					else {
						//��ԕω������Z�b�g
						c->sp.state = Base;
					}*/
					//�΍�P.�o�b�N�A�b�v������ď���������
					/*UINT backup = Base;
					if (c->sp.state & AtkUp) {
						backup |= AtkUp;
					}
					if (c->sp.state & DefUp) {
						backup |= DefUp;
					}
					c->sp.state = Base;
					c->sp.state |= backup;*/
					//�΍�Q.���t�@�N�^�����O������(�t���O�r�b�g�𐮗�����)
					c->sp.state &= ~DeBuff;
					printf("��Ԉُ킪�񕜂����I\n");
					break;
				case 3://�h��̓A�b�v�̏���
					//def��1.5�{
					c->sp.def *= c->skl[skill].effect / 100.0;
					//�h��̓A�b�v�t���OON
					c->sp.state |= DefUp;
					printf("�h��͂��A�b�v�����I\n");
					break;
				default:
					break;
				}
				//���L�����̃X�e�[�^�X��\��
				DisplayStatus(*c);
			}
			else{
				printf("MP������Ȃ��I\n");
			}
		}
	}
}

void DisplayStatus(Chara c) {
	printf("********************\n");
	printf("HP:%-4d  MP:%-3d\n", c.sp.hp, c.mp);

	if (c.sp.state) {
		printf("���:");

		if (c.sp.state & Poison) {
			printf("�� ");
		}
		if (c.sp.state & Sleep) {
			printf("���� ");
		}
		if (c.sp.state & Paralysis) {
			printf("��� ");
		}
		if (c.sp.state & Burn) {
			printf("�Ώ� ");
		}
		if (c.sp.state & AtkUp) {
			printf("�U���̓A�b�v ");
		}
		if (c.sp.state & AtkDown) {
			printf("�U���̓_�E�� ");
		}
		if (c.sp.state & DefUp) {
			printf("�h��̓A�b�v ");
		}
	}
	printf("\n********************\n");
}

int DisplayMenu(void) {
	char ch;

	while (1){
		printf("---------------\n�R�}���h��I��\n");
		printf("1.��������\n2.�X�L��\n3.�ڂ�����\n\n");
		ch = getch();
		if (ch > '0' && ch < '4') {
			return ch - '0';
		}
		else if (ch == 'q') {	//�B���R�}���h:�����I��'q'
			return -1;
		}
	}
}

int SkillMenu(Chara c) {
	int ch, i;

	while (1){
		printf("---------------\n�X�L����I��\n");
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
		printf("�ǂ̏�Ԃɂ��܂����H\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 0:���͏I��>");
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
		printf("�ǂ̏�Ԃ��������܂����H\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 7:�S�� 0:���͏I��>");
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
				//%[^,]:^�̌�ɏ������L���̎�O�܂ł𕶎���Ƃ��ēǂݎ��
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
			printf("�t�@�C�����J���܂���I\n");
			return -1;
		}
	}
	return 0;
}

