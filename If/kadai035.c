#include<stdio.h>
main() {
	int a;

	printf("整数？");
	scanf("%d", &a);
	if (a>0) {
		printf("入力値は「プラス」です\n");
	}
	else {
		if (a < 0) {
			printf("入力値は「マイナス」です\n");
		}
		else
		{
			printf("入力値は「0」です\n");
		}
		
	}
}