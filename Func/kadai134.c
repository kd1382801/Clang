#include<stdio.h>
main() {
	char moji[100], m;

	printf("������(^z�ŏI��)�H");
	m = scanf("%s",moji);
	while (m != EOF) {
		puts(moji);
		printf("������(^z�ŏI��)�H");
		m = scanf("%s",moji);
	}

}