#include<stdio.h>
main() {
	int num, max=0, min=0, m;

	printf("����(^z�ŏI��)�H");
	m = scanf("%d", &num);
	
	while (m != EOF) {
		if (max < num) {
			max = num;
		}
		if (min  > num) {
			min = num;
		}

		printf("����(^z�ŏI��)�H");
		m = scanf("%d", &num);
	}
	printf("�ő�l = %d\n�ŏ��l = %d\n", max, min);
}