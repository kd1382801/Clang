#include<stdio.h>
main() {
	int num1, num2;
	char en;

	printf("®”‚PH");
	scanf("%d", &num1);
	printf("®”‚QH");
	scanf("%d", &num2);
	printf("‰‰ZqH");
	scanf("%s", &en);
	switch (en)
	{
	case  '+':
		printf("%d + %d = %d\n",num1,num2, num1 + num2);
		break;
	case '-':
		printf("%d - %d = %d\n", num1, num2, num1 - num2);
		break;
	case '*':
		printf("%d * %d = %d\n", num1, num2, num1 * num2);
		break;
	case '/':
		printf("%d / %d = %d\n", num1, num2, num1 / num2);
		break;
	case '%':
		printf("%d % %d = %d\n", num1, num2, num1 % num2);
		break;
	}
	
}
