// 1101015 kadai044.c
#include<stdio.h>
main()
{
	int moji;

	printf("����(-999 �œ��͏I��)�H");
	scanf("%d", &moji);
	while (moji != -999) {
		printf("8�i�� = %o \t16�i�� = %X\n", moji, moji);
		printf("����(-999 �œ��͏I��)�H");
		scanf("%d", &moji);
	}
}