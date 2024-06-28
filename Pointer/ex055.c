#include<stdio.h>
main() {
	int a[] = { 11,22,33,44,55,66 };
	int* p_a, i;
	float b[] = { 11.1,22.2,33.3,44.4 };
	float* p_b, sum, ave;

	p_a = a;
	for (sum = 0, i = 0; i < 6; i++) {
		sum += *p_a;
		p_a++;
	}
	ave = sum / i;
	printf("配列a 合計 = %.0f\t平均 = %.3f\n", sum, ave);

	p_b = b;
	for (sum = 0, i = 0; i < 4; i++) {
		sum += *p_b;
		p_b++;
	}
	ave = sum / i;
	printf("配列b 合計 = %.3f\t平均 = %.3f\n", sum, ave);
}