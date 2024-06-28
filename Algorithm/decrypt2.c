#include<stdio.h>
main()
{
	int i, k;
	char s[21];

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]‚Ì•œ†‰»ƒL[„", i);
		scanf("%d", &k);
		s[i] -= k;
	}
	printf("•œ†‰»Ï‚İ•¶š—ñ‚ÍA%s\n", s);
}