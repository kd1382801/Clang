#include<stdio.h>
main() {
	int a;

	printf("�O����P�O�O�܂ł̐����H");
	scanf("%d", &a);
	if (a >=90) {
		printf("���̐��l�̔��茋�ʂ́u�T�v�ł�\n");
	}
	else {
		if (a >= 80) {
			printf("���̐��l�̔��茋�ʂ́u�S�v�ł�\n");
		}
		else
		{
			if (a >= 50) {
				printf("���̐��l�̔��茋�ʂ́u�R�v�ł�\n");
			}
			else
			{
				if (a >= 30) {
					printf("���̐��l�̔��茋�ʂ́u�Q�v�ł�\n");
				}
				else
				{
					printf("���̐��l�̔��茋�ʂ́u�P�v�ł�\n");
				}
			}
		}
	}
}