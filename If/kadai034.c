#include<stdio.h>
main() {
	char a;

	printf("�A���t�@�x�b�g�H");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z') {
		printf("���̕����́u�������v�ł�\n");
	}
	else {
		if(a >= 'A' && a <= 'Z'){
		printf("���̕����́u�啶���v�ł�\n");
		}
		else
		{
			printf("ERROR\n");
		}
	}
}