#include<stdio.h>
main()
{
	int i;
	
	for (i = 1; i <= 60; i++) {
		printf("%3d ", i);
		if (i % 20 == 0) {
			printf("\n");
		}
	}
}