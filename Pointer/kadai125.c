#include<stdio.h>
main() {
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* pd, i;

	pd = data;
	printf("�|�C���^���Œ�ŕ\��\n�z�� data[]= ");
	for (i = 0; i < 8; i++) {
		printf("%d ", *(pd + i));
	}
	printf("\n�|�C���^��ω������ĕ\��\n�z�� data[]= ");
	for (; *pd != -999; pd++) {
		printf("%d ", *pd);
	}
}