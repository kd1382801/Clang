//1101015 kadai041.c
#include<stdio.h>
main()
{
	int su, sum, cnt;
	sum = 0; cnt = 0;
	printf("整数(-999 で終了)？");
	scanf("%d", &su);
	while (su != -999) {
		sum += su;
		cnt++;
		printf("整数(-999 で終了)？");
		scanf("%d", &su);
	}
	printf("合計 = %d\n", sum);
	printf("平均 = %.2f\n", (float)sum / cnt);
}