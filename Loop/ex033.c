#include<stdio.h>
main()
{
	int su, sum, i;
	sum = 0;
	printf("”‚ÍH");
	scanf("%d", &su);
	for (i = 0; su != -999; i++) {
		sum += su;
		printf("”‚ÍH");
		scanf("%d", &su);
	}
	printf("‡Œv=%d \t •½‹Ï=%.2f\n", sum, (float)sum / i);
}