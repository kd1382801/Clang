#include<stdio.h>
main() 
{
	int i;
	char s[50];

	printf("暗号化文字列を入力してください＞");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		s[i] -= 1;
	}
	printf("復号済み文字列は、%s\n", s);
}