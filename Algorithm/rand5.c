#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, num;

	srand(time(0));
	for (i = 0; i < 100; i++) {
		num = rand() % 300 + 1;
		printf("%4d", num);
	}
}