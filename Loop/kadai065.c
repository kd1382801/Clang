// 1101015 kadai065.c
#include<stdio.h>
main()
{
	int num, sum, i;
	sum = 0;
	i = 0;
	num = 0;
	do {
		sum += num;
		i++;
		printf("����(-999 �ŏI��)�H");
		scanf("%d", &num);
	} while (num != -999);
	i--;
	printf("���v = %d\n", sum);
	printf("���� = %f\n", (float)sum / i);
}