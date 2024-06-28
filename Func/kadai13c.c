#include<stdio.h>
void change(int* pa, int* pb);

main() {
	int a, b;

	a = 10;
	b = 20;
	printf("関数実行前の値：\na = %d\tb = %d\n", a, b);
	change(&a, &b);
	printf("関数実行後の値：\na = %d\tb = %d\n", a, b);
}

void change(int* pa, int* pb) {
	int wk;
	wk = *pa;
	*pa = *pb;
	*pb = wk;
	return;
}