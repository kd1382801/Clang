#include<stdio.h>
main()
{
	int i;
	char s[50];

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++) {
		s[i] += 1;
	}
	printf("ˆÃ†‰»•¶š—ñ‚ÍA%s\n", s);
}