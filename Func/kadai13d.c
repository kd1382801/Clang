#include<stdio.h>
void renketu(char* pa, char* pb);

main() {
	char moji1[256] = "関数", moji2[]="わかるかな？";

	printf("配列 moji1 : %s\n", moji1);
	printf("配列 moji2 : %s\n", moji2);
	renketu(moji1, moji2);
	printf("連結された後の文字列 moji1 = %s\n", moji1);
}

void renketu(char* pa, char* pb) {
	int i, j;

	for (i = 0; *(pa + i) != '\0'; i++);
	for (j = 0; *(pb + j) != '\0'; j++, i++) {
		*(pa + i) = *(pb + j);
	}
	*(pb + j) = '\0';
	return;
}