#include<stdio.h>
main() {
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int* pa = a, * pb = b, i;

	for (i = 0; *(pa + i) != 0; i++) {
		*(pb + i) += *(pa + i);
	}
	printf("”z—ñ b[] =");
	for (i = 0; *(pb + i) != 0; i++) {
		printf(" %d", *(pb + i));
	}

}