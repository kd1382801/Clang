#include<stdio.h>
main() {
	int num, sum=0, cnt, m;

	printf("整数(^zで終了)？");
	m = scanf("%d", &num);
	cnt = 0;
	while (m != EOF) {
		sum += num;
		cnt++;
		printf("整数(^zで終了？");
		m = scanf("%d", &num);
	}
	printf("合計 = %d\n平均 = %.1f\n", sum, (float)sum / cnt);
}