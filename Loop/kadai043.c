// 1101015 kadai043.c
#include<stdio.h>
main()
{
	int moji;
	printf("文字コード(-1 で入力終了)？");
	scanf("%d", &moji);
	while (moji != -1) {
		printf("%c\n", moji);
		printf("文字コード(-1 で入力終了)？");
		scanf("%d", &moji);
	}
}