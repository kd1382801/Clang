#include<stdio.h>
main() {
	char str1[128], str2[128];
	char* pstr1 = str1, * pstr2 = str2;
	int i,j;
	
	printf("•¶š—ñ‚PH");
	gets(pstr1);
	printf("•¶š—ñ‚QH");
	gets(pstr2);

	for (i = 0; *(pstr1 + i) != '\0'; i++);
	for (j = 0; *(pstr2 + j) != '\0'; j++, i++) {
		*(pstr1 + i) = *(pstr2 + j);
	}
	*(pstr1 + i) = '\0';

	printf("str1 : %s\n", pstr1);
}
