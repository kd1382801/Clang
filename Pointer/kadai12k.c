#include<stdio.h>
main() {
	char m[] = { "mikan to ringo" };
	char* pm=m;
	int i = 0;

	printf("�󔒂��������z����e = ");
	while (pm[i] != '\0') {
		if (pm[i] == ' ')i++;
		putchar(pm[i]);
		i++;
	}
}
