#include<stdio.h>
main() 
{
	int i;
	char s[50];

	printf("�Í������������͂��Ă���������");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		s[i] -= 1;
	}
	printf("�����ςݕ�����́A%s\n", s);
}