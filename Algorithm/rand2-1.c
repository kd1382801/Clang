#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a, b, c, i;

	srand(time(0));
	for (i = 0; i < 10; i++) {
		a = rand() % 100;
		b = (rand() % 41) + 10;		//rand() % (大きい値-小さい値+1) + 最小値
		c = (rand() % 301) - 100;
			printf("a=%d, b=%d, c=%4d\n", a, b, c);
	}
}