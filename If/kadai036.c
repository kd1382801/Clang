#include<stdio.h>
main() {
	int a,b;

	printf("整数１？");
	scanf("%d", &a);
	printf("整数２？");
	scanf("%d", &b);
	if (a==b) {
		printf("%dと%dは等しい\n",a,b);
	}
	else {
		if (a > b) {
			printf("%dのほうが%dより%d大きい\n",a,b,a-b);
		}
		else
		{
			printf("%dのほうが%dより%d小さい\n", a, b, b - a);
		}
		
	}
}