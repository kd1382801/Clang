#include<stdio.h>
main()
{
	int num, cnt = 0, sum = 0;
	while (1) {
		printf("����(-999 �ŏI��)�H");
		scanf("%d", &num);
		if (num == -999) {
			break;
		}
		sum += num;
		cnt++;
	}
	printf("���v = %d\n���� = %.3f\n", sum, (float)sum / cnt);
}