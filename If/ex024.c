#include<stdio.h>
main()
{
	char moji;
	printf("��������́F");
	scanf("%c", &moji);
	if (moji >= 65 && moji <= 90) {
		printf("�啶���ł�\n");
	}
	else {
		printf("���̑��̕����ł�\n");
	}
}