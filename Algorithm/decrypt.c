#include<stdio.h>
main() 
{
	int i;
	char s[50];

	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++) {
		s[i] -= 1;
	}
	printf("•œ†Ï‚İ•¶š—ñ‚ÍA%s\n", s);
}