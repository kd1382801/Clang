#include<stdio.h>
main()
{
	int m;
	printf("������́F");
	scanf("%d", &m);
	if (m == 2) {
		printf("�ŏI���͂Q�W���ł�\n");
	}
	else {
		if (m == 4 || m == 6 || m == 9 || m == 11) {
			printf("�ŏI���͂R�O���ł�\n");
		}
		else {
			printf("�ŏI���͂R�P���ł�\n");
		}
	}
}