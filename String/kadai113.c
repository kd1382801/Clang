#include<stdio.h>
main() {
	char m[] = "GameSoft";
	int i;

	printf("文字列 = ");
	for (i = 0; m[i] != '\0'; i++) {
		printf("%c", m[i]);
	}
	printf("\n文字数 = %d文字\n", i);
}