//1101015 kadai041.c
#include<stdio.h>
main()
{
	int su, sum, cnt;
	sum = 0; cnt = 0;
	printf("����(-999 �ŏI��)�H");
	scanf("%d", &su);
	while (su != -999) {
		sum += su;
		cnt++;
		printf("����(-999 �ŏI��)�H");
		scanf("%d", &su);
	}
	printf("���v = %d\n", sum);
	printf("���� = %.2f\n", (float)sum / cnt);
}