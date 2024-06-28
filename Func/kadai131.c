#include<stdio.h>
void display(char a);
main() {
	char m,n[100];

	printf("文字(^zで終了)？");
	m=getchar();
	while (m != EOF) {
		display(m);
		gets(n);
		printf("文字(^zで終了)？");
		m=getchar();
	}
}

void display(char a) {
	printf("%c\n", a);
	return;
}