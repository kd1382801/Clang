#include<stdio.h>
main()
{
	double a, b, * p_a = &a, * p_b = &b;
	
	printf("実数値１？");
	scanf("%lf", p_a);
	printf("実数値２？");
	scanf("%lf", p_b);
	
	if (*p_a >= *p_b) {
		printf("大きいほう＝%f\n",*p_a);
	}
	else {
		printf("大きいほう＝%f\n", *p_b);
	}
	
}