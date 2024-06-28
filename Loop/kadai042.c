// 1101015 kadai042.c
#include<stdio.h>
main()
{
	int sum, i;
	sum = 0;
	i = 1;
	printf("%d", i);
	while (sum < 300) {
		sum += i;
		i++;
		printf("+%d", i);
	}
	sum += i;
	printf("=%d\n", sum);
}