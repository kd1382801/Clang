#include<stdio.h>
main() {
	char m[100];
	char* pm = m;
	int cnt;

	printf("文字列？");
	gets(pm);
	for (cnt = 0; *pm != '\0'; pm++, cnt++);
	
	printf("文字数は、%d文字です\n",cnt);
}
