#include<stdio.h>
void display(char a);
main() {
	char m,n[100];

	printf("����(^z�ŏI��)�H");
	m=getchar();
	while (m != EOF) {
		display(m);
		gets(n);
		printf("����(^z�ŏI��)�H");
		m=getchar();
	}
}

void display(char a) {
	printf("%c\n", a);
	return;
}