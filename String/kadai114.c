#include<stdio.h>
main() {
	char m[100];
	int i;
	printf("������́H");
	gets(m);

	printf("������ = ");
	for (i = 0; m[i] != '\0'; i++) {
		printf("%c", m[i]);
	}
	printf("\t������ = %d����\n", i);
}