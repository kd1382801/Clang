#include<stdio.h>
main()
{
	int no;

	printf("整数の入力：");
	scanf("%d", &no);
	if (no < 0) {
		printf("入力値はマイナスです\n");
	}
	else {
		printf("入力値はプラスです\n");
	}
}