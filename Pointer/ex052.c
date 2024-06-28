#include<stdio.h>
main() {
	int a, b, w;
	int* p_a, * p_b;

	a = 100;
	b = 200;
	printf("実行前：a = %d\tb = %d\n", a, b);
	p_a = &a;
	p_b = &b;
	w = *p_a;
	*p_a = *p_b;
	*p_b = w;
	printf("実行後：a = %d\tb = %d\n", a, b);
}