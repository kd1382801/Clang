#include<stdio.h>
main()
{
	int i, a[5];

	a[0] = 10;
	a[1] = 20;
	a[2] = 30;
	a[3] = 40;
	a[4] = 50;
	for (i = 0; i <= 4; i++) {
		printf("a[ %d ] = %d\n", i, a[i]);

	}
}