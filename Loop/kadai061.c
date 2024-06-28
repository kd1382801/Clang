#include<stdio.h>
main()
{
	int i=1;
	do {
		printf("%3d",i);
		if (i == 10) {
			printf("\n");
		}
	} while (i++ %20);


}
