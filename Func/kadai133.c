#include<stdio.h>
main() {
	int num, max=0, min=0, m;

	printf("整数(^zで終了)？");
	m = scanf("%d", &num);
	
	while (m != EOF) {
		if (max < num) {
			max = num;
		}
		if (min  > num) {
			min = num;
		}

		printf("整数(^zで終了)？");
		m = scanf("%d", &num);
	}
	printf("最大値 = %d\n最小値 = %d\n", max, min);
}