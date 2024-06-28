// 1101015 kadai091.c
#include<stdio.h>
main()
{
	double a[10] = { 0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9 };
	int i;
	
	for (i = 0; i < 10; i++) {
		printf("a[%d] = %f\n", i, a[i]);
	}
}