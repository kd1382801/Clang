#include<stdio.h>
main()
{
	int t, h, m, s;
	printf("秒数の入力");
	scanf("%d", &t);
	if (t <= 5000) {
		h = t / 3600;
		t = t % 3600;
		m = t / 60;
		s = t % 60;
		printf("%d時間%d分%d秒です\n", h, m, s);
	}
	else {
		printf("エラー\n");
	}
}