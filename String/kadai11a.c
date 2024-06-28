//1101015 kadai11a.c
#include<stdio.h>
main()
{
	char day[7][10] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };
	int i,j;

	for (i = 0; i < 7; i++) {
		for (j = 0; j<3; j++) {
			putchar(day[i][j]);
		}
		putchar('\n');
	}

}