#include<stdio.h>
main()
{
	char a, b;
	int no;

	printf("出席番号：");
	scanf("%*5c%d", &no);
	printf("番号：%d\n", no);

	printf("入力１：");
	scanf("%*c%c", &a);
	printf("入力１は%c\n", a);
}