#include<stdio.h>
main() {
	int c;
	char dumy[256];

	c = getchar();
	while (c != EOF) {
		putchar(c);
		putchar('\n');
		gets(dumy);
		c = getchar();
	}
}