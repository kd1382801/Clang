#include<stdio.h>
void Sort(int* pa, int b);

main() {
	int a[] = { 10,25,7,45,2,100,3,70,50 };
	int num,i;

	printf("�\�[�g���@(0:���� 1:�~��)�H");
	scanf("%d", &num);
	printf("�\�[�g�O\n");
	for (i = 0; i < 9; i++) {
		printf(" %d",a[i]);
	}
	Sort(a, num);
	printf("\n�\�[�g��\n");
	for (i = 0; i < 9; i++) {
		printf(" %d", a[i]);
	}
	
}

void Sort(int* pa, int b) {
	int i,j,w;
	
	if (b == 0) {
		for (i = 0; i < 9; i++) {
			for (j = i - 1; j >= 0; j--) {
				if (*(pa + j + 1) >= *(pa + j))break;
				w = *(pa + j + 1);
				*(pa + j + 1) = *(pa + j);
				*(pa + j) = w;
			}
		}
	}
	if (b == 1) {
		for (i = 0; i < 9; i++) {
			for (j = i - 1; j >= 0; j--) {
				if (*(pa + j + 1) <= *(pa + j))break;
				w = *(pa + j + 1);
				*(pa + j + 1) = *(pa + j);
				*(pa + j) = w;
			}
		}
	}
	return;

}
