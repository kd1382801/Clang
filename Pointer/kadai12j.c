#include<stdio.h>
main() {
	char m[] = { "ringo" };
	char* pm, n[100], * pn;
	int i, j;

	pm = m;
	pn = n;

	for (i = 0; *(pm + i) != '\0'; i++);
	for (j = 0, i--; i >= 0; j++, i--) {
		*(pn + j) = *(pm + i);
	}
	*(pn + j) = '\0';

	printf("�z����e = %s\n",pm);
	printf("�t������ = %s\n",pn);
}
