#include<stdio.h>
int moji(char a);
main() {
	int a;
	char m;

	printf("�A���t�@�x�b�g�P�����H");
	scanf("%c", &m);
	a = moji(m);
	if (a != 0) {
		printf("�߂�l�́A%d �Ȃ̂œ��͂��������́A�啶���ł��B\n", a);
	}
	else {
		printf("�߂�l�́A%d �Ȃ̂œ��͂��������́A�������ł��B\n", a);
	}
}
int moji(char a) {
	int k;
	if (a >= 0x41 && a <= 0x5A) {
		k = 1;
	}
	else {
		k = 0;
	}
	return(k);
}