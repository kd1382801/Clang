#include<stdio.h>
int Max(int a, int b);
main() {
	int num1, num2,max;
	printf("2‚Â‚Ì®”H");
	scanf("%d%d", &num1, &num2);
	max = Max(num1, num2);
	printf("max = %d\n", max);
}

int Max(int a, int b) {
	int max;
	max = a;
	if (max < b) {
		max = b;
	}
	return max;
}