 #include<stdio.h>
main() {
	char* ad, moji[100];

	printf("文字列の入力>");
	ad = gets(moji);
	while (ad != NULL) {
		printf("入力されたのは%s\n", ad);
		printf("文字列の入力>");
		ad = gets(moji);
	}

}