#include<stdio.h>
main() {
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int w[30], * pw = w;
	int* pa = a, * pb = b, i,j;

	printf("ーーー実行前ーーー\n配列 a[] =");
	for (i = 0; *(pa + i) != 0; i++) {
		printf(" %d", *(pa + i));
	}


	for (j=0; *(pb + j) != 0; j++,i++) {
		*(pa + i) = *(pb + j);
	}
	

	printf("\nーーー実行後ーーー\n配列 a[] =");
	for (i = 0; *(pa + i) != 0; i++) {
		printf(" %d", *(pa + i));
	}

}