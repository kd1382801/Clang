#include<stdio.h>
main()
{
	int i;
	
	for (i = 32; i <= 126; i++) {
		printf(" %X %c", i, i);
		if (i % 10 == 1) {
			printf("\n");
		}
	}
}