#include<stdio.h>
main()
{
	int i, k;
	char s[21];

	printf("文字列を入力してください＞");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]の復号化キー＞", i);
		scanf("%d", &k);
		s[i] -= k;
	}
	printf("復号化済み文字列は、%s\n", s);
}