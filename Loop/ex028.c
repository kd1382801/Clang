#include<stdio.h>
main()
{
	int gokei, ia;
	gokei = 0;
	printf("”‚ğ“ü‚ê‚ÄF");
	scanf("%d", &ia);
	while (ia != -999) {
		gokei += ia;
		printf("”‚ğ“ü‚ê‚ÄF");
		scanf("%d", &ia);
	}
	printf("‡Œv%d\n", gokei);
}