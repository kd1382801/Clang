#include<stdio.h>
main() {
	char m[] = { "mikan to ringo" };
	char* pm=m;
	int i = 0;

	printf("空白を除いた配列内容 = ");
	while (pm[i] != '\0') {
		if (pm[i] == ' ')i++;
		putchar(pm[i]);
		i++;
	}
}
