#include<stdio.h>
main() {
	int data[10] = { 10,9,1,20,45,21,38,45,88 };
	int* pd, i,max,min;

	pd = data;
	printf("�z��̓��e\ndata[]= ");
	for (i = 0; i<9; i++) {
		printf("%d ", *(pd + i));
	}
	printf("\n");

	for(i = 0, max = *(pd + i); i < 9; i++) {
		if (max < *(pd + i)) {
			max = *(pd + i);
		}
	}
	printf("�ő�l = %d\n", max);

	for (i = 0, min = *(pd + i); i < 9; i++) {
		if (min > *(pd + i)) {
			min = *(pd + i);
		}
	}
	printf("�ŏ��l = %d\n", min);
}