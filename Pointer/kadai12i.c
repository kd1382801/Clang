#include<stdio.h>
main() {
	char m[] = { "mikan" };
	char* pm, n[100], * pn;
	pm = m;
	pn = n;

	for (; *pn++ = *pm++;);
	pn = n;
	printf("コピー先の文字列 = %s\n",pn);
}
