#include<stdio.h>
main() {
	int i, sum;
	i = 1; sum = 0;
	printf("%d", i);
	do {
		sum += i;
		i++;
		printf("+%d", i);
	} while (sum<300);
	sum += i;
	printf("=%d\n", sum);
}
