#include<stdio.h>
main() {
	char moji[100],moji2[100];
	int m,i,j;

	printf("������(^z�ŏI��)�H");
	m = scanf("%s",moji);
	while (m != EOF) {
		for (i = 0; moji[i] != '\0'; i++);
		for (i--, j = 0; i >= 0; i--, j++) {
			moji2[j] = moji[i];
		}
		moji2[j] = '\0';
		printf("%s\n", moji2);
		printf("������(^z�ŏI��)�H");
		m = scanf("%s", moji);
	}
}