#include<stdio.h>
main()
{
	int num1, num2;
	
	while (1) {
		printf("�����P(-999 �ŏI��)�H");
		scanf("%d", &num1);
		printf("�����Q(-999 �ŏI��)�H");
		scanf("%d", &num2);
		if (num1 == -999 || num2 == -999)break;
		if (num2 == 0)continue;
		printf("%d / %d = %d ���܂� %d\n", num1, num2, num1 / num2, num1 % num2);
	}
}