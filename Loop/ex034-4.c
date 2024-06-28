#include<stdio.h>
main()
{
	int num, i, j;
	j = 0;

	printf("”‚ÍH");
	scanf("%d", &num);
	do {
		i = 0;
		do {
			printf(" ");
			i++;
		} while (i < num - j );
		i = 0;
		do {
			printf("*");
			i++;
		} while (i < j + 1);
		printf("\n");
		j++;
		
	} while (j < num);
	
}