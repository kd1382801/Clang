#include<stdio.h>
main() {
	char m[100];
	int i;
	printf("������́H");
	gets(m);

	for (i = 0; m[i] != '\0'; i++) {
		putchar(m[i]);
		putchar('\n');
	}
}