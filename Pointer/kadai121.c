#include<stdio.h>
main()
{
	int a = 100, b = 10;
	int* pa, * pb;
	
	pa = &a;
	pb = &b;

	printf("%d + %d = %d\n", *pa, *pb, *pa + *pb);
	printf("%d - %d = %d\n", *pa, *pb, *pa - *pb);
	printf("%d * %d = %d\n", *pa, *pb, *pa * *pb);
	printf("%d / %d = %d\n", *pa, *pb, *pa / *pb);
}