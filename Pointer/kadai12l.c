#include<stdio.h>
main() {
	char m[100];
	char* pm = m;
	int cnt;

	printf("������H");
	gets(pm);
	for (cnt = 0; *pm != '\0'; pm++, cnt++);
	
	printf("�������́A%d�����ł�\n",cnt);
}
