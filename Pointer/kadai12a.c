#include<stdio.h>
main() {
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int w[30], * pw = w;
	int* pa = a, * pb = b, i,j;

	printf("�[�[�[���s�O�[�[�[\n�z�� a[] =");
	for (i = 0; *(pa + i) != 0; i++) {
		printf(" %d", *(pa + i));
	}
	printf("\n�z�� b[] =");
	for (i = 0; *(pb + i) != 0; i++) {
		printf(" %d", *(pb + i));
	}

	for (j = 0; *(pa + j) != 0; j++);
	for (i = 0,j--; *(pa + i) != 0; i++,j--) {
		*(pb + j) = *(pa + i);
	}
	

	printf("\n�[�[�[���s��[�[�[\n�z�� a[] =");
	for (i = 0; *(pa + i) != 0; i++) {
		printf(" %d", *(pa + i));
	}
	printf("\n�z�� b[] =");
	for (i = 0; *(pb + i) != 0; i++) {
		printf(" %d", *(pb + i));
	}
	
}