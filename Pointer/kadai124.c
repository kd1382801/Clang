#include<stdio.h>
main()
{
	char c, * p_c = &c;
	
	printf("１文字入力？");
	scanf("%c", p_c);
	
	printf("次の文字は%c\n", *p_c + 1);
	
}