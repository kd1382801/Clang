#include<stdio.h>
#include<string.h>
struct animal {
	int no;
	char name[20];
	char color[10];
};
struct animal data[50] = { {30,"dog","white"},{50,"tiger","yellow"},{60,"horse","brown"} }, * p_data = data;
int data_size = 3;
int* pds = &data_size;

void hyouzi(void);
void tuika(void);
void kensaku(void);

main() {
	char menu,dumy[256];

	while (1) {
		printf("\n�������j���[ (X�̓��͂ŏI�����܂�)\n�P�F�f�[�^�\���@�Q�F�f�[�^�ǉ��@�R�F�f�[�^�����@�@�����́H");
		scanf("%c", &menu);
		gets(dumy);

		if (menu == 'X') break;
		switch (menu)
		{
			case'1':
				hyouzi();
				break;
			case'2':
				tuika();
				break;
			case'3':
				kensaku();
				break;
			default:
				break;
		}
		
	}
}

void hyouzi(void) {
	int i;

	for (i = 0; i < *pds; i++) {
		printf("�ԍ��F%d\t���O�F%s\t�F�F%s\n", (p_data + i)->no, (p_data + i)->name, (p_data + i)->color);
	}
	return;
}

void tuika(void) {
	char dumy[256];

	if (*pds == 50) {
		printf("�f�[�^�T�C�Y���ő�l�ɂȂ�܂����B\n\n");
		return;
	}

	printf("�f�[�^�̒ǉ����s���܂��̂œ��͂��Ă��������B\n");
	printf("�ԍ���");
	scanf("%d", &(p_data + *pds)->no);
	gets(dumy);
	printf("���O��");
	gets((p_data + *pds)->name);;
	printf("�F��");
	gets((p_data + *pds)->color);
	*pds += 1;
	return;
}

void kensaku(void) {
	char moji[256],dumy[256];
	int num,jo,i;

	printf("�o�^����Ă���f�[�^�̌������s���܂��B\n");
	printf("�������� (�P.�ԍ��F�Q�D���O�F�R�D�F)��");
	scanf("%d", &jo);
	gets(dumy);

	switch (jo)
	{
	case 1:
		printf("��������ԍ���");
		scanf("%d", &num);
		gets(dumy);
		printf("��������\n");
		for (i = 0; i < *pds; i++) {
			if ((p_data + i)->no == num) {
				printf("�ԍ��F%d\t���O�F%s\t�F�F%s\n", (p_data + i)->no, (p_data + i)->name, (p_data + i)->color);
			}
		}
		break;

	case 2:
		printf("�������閼�O��");
		gets(moji);
		printf("��������\n");
		for (i = 0; i < *pds; i++) {
			if (strcmp((p_data+i)->name,moji) == 0) {
				printf("�ԍ��F%d\t���O�F%s\t�F�F%s\n", (p_data + i)->no, (p_data + i)->name, (p_data + i)->color);
			}
		}
		break;

	case 3:
		printf("��������F��");
		gets(moji);
		printf("��������\n");
		for (i = 0; i < *pds; i++) {
			if (strcmp((p_data + i)->color, moji) == 0) {
				printf("�ԍ��F%d\t���O�F%s\t�F�F%s\n", (p_data + i)->no, (p_data + i)->name, (p_data + i)->color);
			}
		}
		break;
	}
	return;
}