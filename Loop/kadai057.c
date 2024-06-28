#include<stdio.h>
main()
{
	int i;
	char moji;
	
	printf("アルファベット小文字？");
	scanf("%c", &moji);
	for (moji++; moji < 'z'; moji++) {
		printf(" %c", moji-32);
	}
	printf(" %c", moji-32);
}
