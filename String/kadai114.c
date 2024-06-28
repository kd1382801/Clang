#include<stdio.h>
main() {
	char m[100];
	int i;
	printf("•¶š—ñ‚ÍH");
	gets(m);

	printf("•¶š—ñ = ");
	for (i = 0; m[i] != '\0'; i++) {
		printf("%c", m[i]);
	}
	printf("\t•¶š” = %d•¶š\n", i);
}