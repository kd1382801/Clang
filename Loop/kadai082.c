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
		if (num < 0) {
			continue;
		}
		sum += num;
		cnt++;
	}
	printf("‡Œv = %d\t•½‹Ï = %.3f\n", sum, (float)sum / cnt);
}