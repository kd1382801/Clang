#include<stdio.h>
main()
{
	int a = 100, b;
	int *p_a;
	
	p_a = &a;
	b = *p_a;
	printf("a = %d &a = %d p_a = %d *p_a = %d &p_a = %d\n", a, &a, p_a, *p_a, &p_a);
}