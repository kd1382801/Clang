#include<stdio.h>
main() {
	int a[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	int i,j,c[5][5], * p_a, * p_c;

	p_a = a[0];
	p_c = c[0];

	
	for (i = 0, j = 24; i < 25; i++, j--) {
		*(p_c + j) = *(p_a + i);
	}

	printf("�z�� c\n");
	for (i = 0; i < 25; i++, p_c++) {
		printf(" %2d", *p_c);
		if ((i + 1) % 5 == 0) {
			printf("\n");
		}
	}
}