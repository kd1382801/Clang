#include<stdio.h>
main()
{
	int i, k;
	char s[21];

	printf("���������͂��Ă���������");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]�̕������L�[��", i);
		scanf("%d", &k);
		s[i] -= k;
	}
	printf("�������ςݕ�����́A%s\n", s);
}