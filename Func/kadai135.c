#include<stdio.h>
main() {
	char moji[100],moji2[100];
	int m,i,j;

	printf("文字列(^zで終了)？");
	m = scanf("%s",moji);
	while (m != EOF) {
		for (i = 0; moji[i] != '\0'; i++);
		for (i--, j = 0; i >= 0; i--, j++) {
			moji2[j] = moji[i];
		}
		moji2[j] = '\0';
		printf("%s\n", moji2);
		printf("文字列(^zで終了)？");
		m = scanf("%s", moji);
	}
}