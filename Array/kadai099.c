#include<stdio.h>
main()
{
	int i, j;
	char moji[100];

	printf("�񐔂ƕ��������� ");
	scanf("%d%s", &i, moji);
	j = 0;
	while (j < i) {
		printf("%s\t", moji);
		j++;
	}

}