#include <stdio.h>
main()
{
	int d1, d2, d3, sum;
	float avg;
	printf("整数を3個入力：");
	scanf("%d%d%d", &d1, &d2, &d3);//複数データを一度に入力
	sum = d1 + d2 + d3;
	avg = (float)sum / 3;//キャスト(型変換)
	printf("合計= %d \t 平均= %.2f \n",sum, avg);//\t(tab)を使用
}