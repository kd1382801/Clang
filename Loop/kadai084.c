#include<stdio.h>
main()
{
	int num1, num2;
	
	while (1) {
		printf("整数１(-999 で終了)？");
		scanf("%d", &num1);
		printf("整数２(-999 で終了)？");
		scanf("%d", &num2);
		if (num1 == -999 || num2 == -999)break;
		if (num2 == 0)continue;
		printf("%d / %d = %d あまり %d\n", num1, num2, num1 / num2, num1 % num2);
	}
}