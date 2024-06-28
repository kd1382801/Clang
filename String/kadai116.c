#include<stdio.h>
main() {
	char m1[100], m2[50];
	int i,j;
	printf("•¶š—ñ‚PH");
	gets(m1);
	printf("•¶š—ñ‚QH");
	gets(m2);

	for (i = 0; m1[i] != '\0'; i++);
	for (j = 0; m2[j] != '\0'; j++, i++) {
		m1[i] = m2[j];
	}
	m1[i] = '\0';
	puts(m1);
}