#include<stdio.h>
main() {
	char a;

	printf("１文字入力？");
	scanf("%c", &a);
	if (a >='a'&& a<='z') {
		printf("変換結果は%cです\n",a - 32);
	}
	else {
		if (a >= 'A' && a <= 'Z') {
			printf("変換結果は%cです\n", a + 32);
		}
		else
		{
			printf("変換結果は%cです\n", a);
		}
	}
}