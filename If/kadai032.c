#include<stdio.h>
main() {
	int a;

	printf("整数？");
	scanf("%d", &a);
	if (a % 2) {
		printf("その数は「奇数」です\n");
	}
	else {
		printf("その数は「偶数」です\n");
	}
}