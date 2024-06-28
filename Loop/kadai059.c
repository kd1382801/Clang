#include<stdio.h>
main()
{
	int i, j;

	printf("   ");
	for (i = 1; i < 10; i++) {
		printf("%3d", i);
	}
	printf("\n==============================");
	for (i = 1; i < 10; i++) {
		printf("\n%d |", i);
		for (j = 1; j < 10; j++) {
			printf("%3d", i * j);
		}
		
	}
}