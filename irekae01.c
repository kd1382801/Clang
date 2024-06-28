#include<stdio.h>
main()
{
	int a, b, w;

	a = 5;
	b = 3;

	printf("“ü‚ê‘Ö‚¦‘O a=%d, b=%d\n", a, b);
	w = a;
	a = b;
	b = w;
	printf("“ü‚ê‘Ö‚¦Œã a=%d, b=%d\n", a, b);
}