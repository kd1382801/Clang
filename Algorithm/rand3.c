#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int k;

	srand(time(0));
	k = (rand() % 100) +1;
	if (k <= 30) {
		printf("‚©‚¢‚µ‚ñ‚Ì‚¢‚¿‚°‚«I\n");
	}
	else {
		printf("’ÊíUŒ‚\n");
	}
}