#include<stdio.h>
main()
{
	int i;
	char moji;
	
	printf("�A���t�@�x�b�g�������H");
	scanf("%c", &moji);
	for (moji++; moji < 'z'; moji++) {
		printf(" %c", moji-32);
	}
	printf(" %c", moji-32);
}
