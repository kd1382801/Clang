#include<stdio.h>
void maxmin(int* pa, int* pmax, int* pmin);

main() {
	int a[] = { 10,25,7,45,2,100,3,70,50 };
	int max, min,i;

	printf("”z—ñ‚Ì“à—e\n");
	for (i = 0; i < 9; i++) {
		printf(" %d",a[i]);
	}
	maxmin(a, &max, &min);
	printf("\nmax = %d\tmin = %d\n", max, min);
}
void maxmin(int* pa, int* pmax, int* pmin) {
	int i=0;

	*pmax = *(pa + i);
	for (i = 1; i < 9; i++) {
		if (*pmax < *(pa + i)) {
			*pmax = *(pa + i);
		}
	}
	i = 0;
	*pmin = *(pa + i);
	for (i = 1; i < 9; i++) {
		if (*pmin > *(pa + i)) {
			*pmin = *(pa + i);
		}
	}
}