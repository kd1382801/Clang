#include<stdio.h>
void maxmin(int a, int b, int c, int* max, int* min);
main() {
	int a, b, c, max, min;

	printf("�������R����:");
	scanf("%d%d%d", &a, &b, &c);
	maxmin(a, b, c, &max, &min);
	printf("�ő�l = %d �ŏ��l = %d\n", max, min);
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