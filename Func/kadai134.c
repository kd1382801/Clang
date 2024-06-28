#include<stdio.h>
main() {
	char moji[100], m;

	printf("文字列(^zで終了)？");
	m = scanf("%s",moji);
	while (m != EOF) {
		puts(moji);
		printf("文字列(^zで終了)？");
		m = scanf("%s",moji);
	}

}