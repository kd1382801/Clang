#include<stdio.h>
main() {
	int num, sum=0, cnt, m;

	printf("����(^z�ŏI��)�H");
	m = scanf("%d", &num);
	cnt = 0;
	while (m != EOF) {
		sum += num;
		cnt++;
		printf("����(^z�ŏI���H");
		m = scanf("%d", &num);
	}
	printf("���v = %d\n���� = %.1f\n", sum, (float)sum / cnt);
}