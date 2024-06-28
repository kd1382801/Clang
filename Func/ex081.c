#include<stdio.h>
int Max(int* p,int size);
int Min(int* p,int size);

main() {
	int data[8] = { 6,10,8,2,9,5,1,7 },max,min;

	max = Max(data,8);
	min = Min(data,8);
	printf("Å‘å’l= %d\nÅ¬’l= %d\n", max, min);
}

int Max(int* p,int size) {
	int max, i;
	for (max = *p, i = 1; i < size; i++) {
		if (*(p + i) > max) {
			max = *(p + i);
		}
	}
	return max;
}

int Min(int* p, int size) {
	int min, i;
	for (min = *p, i = 1; i < size; i++) {
		if (*(p + i) < min) {
			min = *(p + i);
		}
	}
	return min;
}