#include<stdio.h>
main()
{
	char c, * p_c = &c;
	
	printf("�P�������́H");
	scanf("%c", p_c);
	
	printf("���̕�����%c\n", *p_c + 1);
	
}