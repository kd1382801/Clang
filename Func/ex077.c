#include<stdio.h>
void maxmin(int a, int b, int c, int* max, int* min);
main() {
	int a, b, c, max, min;

	printf("整数を３つ入力:");
	scanf("%d%d%d", &a, &b, &c);
	maxmin(a, b, c, &max, &min);
	printf("最大値 = %d 最小値 = %d\n", max, min);
}

void maxmin(int a, int b, int c, int* max, int* min) {
	*max = a;
	if (b > *max) {
		*max = b;
	}
	if (c > *max) {
		*max = c;
	}
	*min = a;
	if (b < *min) {
		*min = b;
	}
	if (c < *min) {
		*min = c;
	}
	return;
}