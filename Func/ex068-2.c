 #include<stdio.h>
main() {
	char* ad, moji[100];

	printf("������̓���>");
	ad = gets(moji);
	while (ad != NULL) {
		printf("���͂��ꂽ�̂�%s\n", ad);
		printf("������̓���>");
		ad = gets(moji);
	}

}