#include<stdio.h>
main()
{
	int num, cnt = 0, sum = 0;
	while (1) {
		printf("®”(-999 ‚ÅI—¹)H");
		scanf("%d", &num);
		if (num == -999) {
			break;
		}
		sum += num;
		cnt++;
	}
	printf("‡Œv = %d\n•½‹Ï = %.3f\n", sum, (float)sum / cnt);
}