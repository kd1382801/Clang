#include<stdio.h>
main()
{
	char moji;
	printf("文字を入力：");
	scanf("%c", &moji);
	if (moji >= 65 && moji <= 90) {
		printf("大文字です\n");
	}
	else {
		printf("その他の文字です\n");
	}
}