#include<stdio.h>
main() {
	double data[5] = {10.8,20.3,30.6,40.4,50.5};
	double* pd = data,sum;
	int i;

	printf("�z��̓��e\n�z�� data[] =");
	for (i = 0; i < 5; i++) {
		printf(" %f", *(pd + i));
	}

	for (i = 0,sum = 0; i < 5; i++) {
		sum += *(pd + i);
	}
	printf("\n���v = %.3f\n���� = %.3f\n", sum, sum / 5);
}