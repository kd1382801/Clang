#include<stdio.h>
void calculate(int a, int b, int* s, float* a1);

main() {
	int x, y, s;
	float a;

	printf("�������Q����:");
	scanf("%d%d", &x, &y);
	calculate(x, y, &s, &a);
	printf("���v�� %d�A���ς� %.2f\n", s, a);
}

void calculate(int a, int b, int* s, float* a1) {
	*s = a + b;
	*a1 = (a + b) / 2.0;
	return;
}