// 1101015 kadai043.c
#include<stdio.h>
main()
{
	int moji;
	printf("�����R�[�h(-1 �œ��͏I��)�H");
	scanf("%d", &moji);
	while (moji != -1) {
		printf("%c\n", moji);
		printf("�����R�[�h(-1 �œ��͏I��)�H");
		scanf("%d", &moji);
	}
}