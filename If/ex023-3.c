#include<stdio.h>
main()
{
	int e, no1, no2;

	printf("演算子を入力：");
	scanf("%d", &e);
	printf("２つの整数を入力");
	scanf("%d%d", &no1, &no2);
	if (e == 1) {
		printf("%d\n", no1 + no2);
	}
	else {
		if (e == 2) {
			printf("%d\n", no1 - no2);
		}
		else {
			if (e == 3) {
				printf("%d\n", no1 * no2);
			}
			else {
				if (e == 4) {
					printf("%d\n", no1 / no2);
				}
			}
		}
	}
}