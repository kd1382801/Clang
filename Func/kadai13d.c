#include<stdio.h>
void renketu(char* pa, char* pb);

main() {
	char moji1[256] = "�֐�", moji2[]="�킩�邩�ȁH";

	printf("�z�� moji1 : %s\n", moji1);
	printf("�z�� moji2 : %s\n", moji2);
	renketu(moji1, moji2);
	printf("�A�����ꂽ��̕����� moji1 = %s\n", moji1);
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