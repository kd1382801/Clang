#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int pl, cpu;

	printf("�����o���܂����H\n�i1:�O�[ 2:�`���L 3:�p�[�j��");
	scanf("%d", &pl);
	if (pl == 1) {
		printf("�v���C���[�̓O�[�ł��B\n");
	}
	else {
		if (pl == 2) {
			printf("�v���C���[�̓`���L�ł��B\n");
		}
		else {
				printf("�v���C���[�̓p�[�ł��B\n");
		}
	}
	
	srand(time(0));
	cpu = rand() % 3 ;
	if (cpu == 0) {
		printf("�R���s���[�^�̓O�[�ł��B\n");
	}
	else {
		if (cpu == 1) {
			printf("�R���s���[�^�̓`���L�ł��B\n");
		}
		else {
			printf("�R���s���[�^�̓p�[�ł��B\n");
		}
	}

	if ((pl == 1 && cpu == 1) || (pl == 2 && cpu == 2) || (pl== 3 && cpu == 0 )) {	//(pl-cpu+3)%3==0�ł��ł���
		printf("�v���C���[�̏����ł��B\n");
	}
	if ((pl == 1 && cpu == 0) || (pl == 2 && cpu == 1) || (pl == 3 && cpu == 2)) {	//(pl-cpu+3)%3==2�ł��ł���
		printf("�������ł��B\n");
	}
	if ((pl == 1 && cpu == 2) || (pl == 2 && cpu == 0) || (pl == 3 && cpu == 1)) {	//(pl-cpu+3)%3==1�ł��ł���
		printf("�v���C���[�̕����ł��B\n");
	}
}