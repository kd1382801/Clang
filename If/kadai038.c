#include<stdio.h>
main() {
	char a;

	printf("�P�������́H");
	scanf("%c", &a);
	if (a >='a'&& a<='z') {
		printf("�ϊ����ʂ�%c�ł�\n",a - 32);
	}
	else {
		if (a >= 'A' && a <= 'Z') {
			printf("�ϊ����ʂ�%c�ł�\n", a + 32);
		}
		else
		{
			printf("�ϊ����ʂ�%c�ł�\n", a);
		}
	}
}