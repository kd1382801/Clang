#include<stdio.h>
main()
{
	int num, i;
	printf("”‚ÍH");
	scanf("%d", &num);
	do {
		i = 1;
		do {
			printf("*");
			i++;
		} while (i <= 5);
		printf("\n");
		num --;
	} while (num > 0);
}