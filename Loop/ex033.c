#include<stdio.h>
main()
{
	int su, sum, i;
	sum = 0;
	printf("数は？");
	scanf("%d", &su);
	for (i = 0; su != -999; i++) {
		sum += su;
		printf("数は？");
		scanf("%d", &su);
	}
	printf("合計=%d \t 平均=%.2f\n", sum, (float)sum / i);
}