// 1101015 kadai044.c
#include<stdio.h>
main()
{
	int moji;

	printf("整数(-999 で入力終了)？");
	scanf("%d", &moji);
	while (moji != -999) {
		printf("8進数 = %o \t16進数 = %X\n", moji, moji);
		printf("整数(-999 で入力終了)？");
		scanf("%d", &moji);
	}
}