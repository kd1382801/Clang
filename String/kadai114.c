#include<stdio.h>
main() {
	char m[100];
	int i;
	printf("文字列は？");
	gets(m);

	printf("文字列 = ");
	for (i = 0; m[i] != '\0'; i++) {
		printf("%c", m[i]);
	}
	printf("\t文字数 = %d文字\n", i);
}