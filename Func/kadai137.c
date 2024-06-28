#include<stdio.h>
int moji(char a);
main() {
	int a;
	char m;

	printf("アルファベット１文字？");
	scanf("%c", &m);
	a = moji(m);
	if (a != 0) {
		printf("戻り値は、%d なので入力した文字は、大文字です。\n", a);
	}
	else {
		printf("戻り値は、%d なので入力した文字は、小文字です。\n", a);
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