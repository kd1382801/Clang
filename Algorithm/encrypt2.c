#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, n, k[21];
	char s[21];

	srand(time(0));
	printf("���������͂��Ă���������");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		k[i] = rand() % 6;
		s[i] += k[i];
	}
	printf("�Í���������́A%s\n�Í����L�[�́A", s);
	for (n = 0; n < i; n++) {
		printf("%d", k[n]);
	}
	
}