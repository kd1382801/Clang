#include<stdio.h>
main()
{
	double a, b, * p_a = &a, * p_b = &b;
	
	printf("�����l�P�H");
	scanf("%lf", p_a);
	printf("�����l�Q�H");
	scanf("%lf", p_b);
	
	if (*p_a >= *p_b) {
		printf("�傫���ق���%f\n",*p_a);
	}
	else {
		printf("�傫���ق���%f\n", *p_b);
	}
	
}