#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Skil_Num 3
#define Mob_Num 3

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
	Base = 0,			//00000000 �ʏ���
	Poison = 1 << 0,	//00000001 �ǂ����
	Sleep = 1 << 1,		//00000010 �˂ނ���
	Paralysis = 1 << 2,	//00000100 �܂Џ��
	Burn = 1 << 3,		//00001000 �₯�Ǐ��
	AtkUp = 1 << 4,		//00010000 �U���̓A�b�v���
	AtkDown = 1 << 5,	//00100000 �U���̓_�E�����
	Dead = 1 << 6,		//01000000 ���S�t���O
	Atk_Skill = 1 << 7	//10000000 ���̃t���O��ON�̃L���������ُ��Ԃ�t���ł��Ȃ�
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



main(int argc,char *argv[])
{
	srand(time(0));
	//				  name    hp  atk def state maxhp  mp
	Chara chara = { "��l��",2000,200,100,Base, 2000, 150,
		// sk.name     type usemp effect
		{{"HP��",      0,   50,  800},
		 {"�U���̓A�b�v",1,   50,  120}
		 {"��Ԉُ��",2,   20,    0}} };

	Mob mob[Mob_Num] = {
		//name    hp atk def  state             rate%
		{"�GA",  700,150,800,Poison  | Atk_Skill,30},
		{"�GB", 1500,200,200,Burn    | Atk_Skill,30},
		{"�{�X",5000,200, 80,AtkDown | Atk_Skill,10} };

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
	//�U���̓_�E���t���O��ON�ŁAAtk_Skll��OFF�̂Ƃ�(��l���̂�)
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
	damage = DamageCalc(sp1, sp2);//*sp2
	printf("%s��%d�̃_���[�W\n\n", sp2->name, damage);
	sp2->hp -= damage;
	if (sp2->hp <= 0) {
		printf("%s�͓|���ꂽ\n", sp2->name);
		sp2->state |= Dead;
	}
}

void BattleMode(Chara* c, Mob m) {
	int command, skill;
	system("cls");	//�R�}���h�v�����v�g��cls���߂̎��s
	DisplayStatus(*c);
	printf("%s�������ꂽ�I\n", m.sp.name);
	while (1) {
		command = DisplayMenu();
		if (c->sp.state & Poison) {
			c->sp.hp *= 0.8;
		}
		if (c->sp.state & Burn) {
			c->sp.hp *= 0.9;
			c->mp *= 0.9;
		}
		//��������
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
	}
	printf("\n********************\n");
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


int DisplayMenu(void) {

}

int SkillMenu(Chara c) {

}


