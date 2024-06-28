#include<stdio.h>
main() {
	char m[100];
	char* pm = m;
	int cnt;

	printf("•¶š—ñH");
	gets(pm);
	for (cnt = 0; *pm != '\0'; pm++, cnt++);
	
	printf("•¶š”‚ÍA%d•¶š‚Å‚·\n",cnt);
}
