#include<stdio.h>
main() {
	char* p = "pointer test program";
	char save[256];
	int i;

	for (i = 0; *p != '\0'; i++, p++) {
		save[i] = *p;
	}
	save[i] = '\0';

	printf("”z—ñ save[] = %s",save);
	
}
