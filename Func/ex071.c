#include<stdio.h>
int gokei(int a,int b,int c);
float heikin(int a);
main() {
	int num1, num2, num3, sum;
	float avg;

	printf("�������R����:");
	scanf("%d%d%d", &num1, &num2, &num3);
	sum = gokei(num1, num2, num3);
	avg = heikin(sum);
	printf("���v�� %d�A���ς� %.2f\n", sum, avg);
}
int gokei(int a, int b, int c) {
	int sum;
	sum = a + b + c;
	return(sum);
}
float heikin(int a) {
	float avg;
	avg = (float)a / 3;
	return(avg);
}