#include<stdio.h>
main()
{
	int i;
	char s[50];

	printf("���������͂��Ă���������");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++) {
		s[i] += 1;
	}
	printf("�Í���������́A%s\n", s);
}