#include<stdio.h>
void calculate(int a, int b, int* s, float* a1);

main() {
	int x, y, s;
	float a;

	printf("整数を２つ入力:");
	scanf("%d%d", &x, &y);
	calculate(x, y, &s, &a);
	printf("合計は %d、平均は %.2f\n", s, a);
}

void calculate(int a, int b, int* s, float* a1) {
	*s = a + b;
	*a1 = (a + b) / 2.0;
	return;
}