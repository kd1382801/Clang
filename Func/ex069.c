#include<stdio.h>
main() {
	int su,num, sum=0, cnt;
	float ave=0;

	printf("����:");
	num = scanf("%d", &su);
	cnt = 0;
	while (num != EOF) {
		sum += su;
		cnt++;
		printf("����:");
		num = scanf("%d", &su);
	}
	ave = (float)sum / cnt;
	printf("���v = %d\t���� = %.2f\n", sum, ave);
}