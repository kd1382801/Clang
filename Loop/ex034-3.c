#include<stdio.h>
main()
{
	int num, i, j=1;

	printf("”‚ÍH");
	scanf("%d", &num);
	do {
		i = 0;
		do {
			printf("*");
			i++;
		} while (i < j);
		printf("\n");
		num--;
		j++;
	} while (num > 0);
}