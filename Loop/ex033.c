#include<stdio.h>
main()
{
	int su, sum, i;
	sum = 0;
	printf("���́H");
	scanf("%d", &su);
	for (i = 0; su != -999; i++) {
		sum += su;
		printf("���́H");
		scanf("%d", &su);
	}
	printf("���v=%d \t ����=%.2f\n", sum, (float)sum / i);
}