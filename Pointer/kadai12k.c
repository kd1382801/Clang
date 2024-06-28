#include<stdio.h>
main() {
	char m[] = { "mikan to ringo" };
	char* pm=m;
	int i = 0;

	printf("‹ó”’‚ğœ‚¢‚½”z—ñ“à—e = ");
	while (pm[i] != '\0') {
		if (pm[i] == ' ')i++;
		putchar(pm[i]);
		i++;
	}
}
