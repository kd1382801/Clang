#include<stdio.h>
main() {
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* pd, i;

	pd = data;
	printf("ポインタを固定で表示\n配列 data[]= ");
	for (i = 0; i < 8; i++) {
		printf("%d ", *(pd + i));
	}
	printf("\nポインタを変化させて表示\n配列 data[]= ");
	for (; *pd != -999; pd++) {
		printf("%d ", *pd);
	}
}