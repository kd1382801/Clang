#include<stdio.h>
main() {
	int a, b, c;
	int* p_a, * p_b;

	a = 50;
	b = 10;
	p_a = &a;
	p_b = &b;
	c = (*p_a) + (*p_b);
	printf("%d + %d = %d\n", a, b, c);
}