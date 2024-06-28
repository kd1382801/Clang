//1101015 kadai117.c
#include<stdio.h>
main()
{
	char day[7][10] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };
	int i;

	for (i = 0; i < 7; i++) {
		puts(day[i]);
	}

}