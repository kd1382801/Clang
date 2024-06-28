#include<stdio.h>
main() {
	int a;

	printf("０から１００までの整数？");
	scanf("%d", &a);
	if (a >=90) {
		printf("その数値の判定結果は「５」です\n");
	}
	else {
		if (a >= 80) {
			printf("その数値の判定結果は「４」です\n");
		}
		else
		{
			if (a >= 50) {
				printf("その数値の判定結果は「３」です\n");
			}
			else
			{
				if (a >= 30) {
					printf("その数値の判定結果は「２」です\n");
				}
				else
				{
					printf("その数値の判定結果は「１」です\n");
				}
			}
		}
	}
}