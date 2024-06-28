 #include<stdio.h>
main() {
	char* ad, moji[100];

	printf("•¶Žš—ñ‚Ì“ü—Í>");
	ad = gets(moji);
	while (ad != NULL) {
		printf("“ü—Í‚³‚ê‚½‚Ì‚Í%s\n", ad);
		printf("•¶Žš—ñ‚Ì“ü—Í>");
		ad = gets(moji);
	}

}