#include<stdio.h>
main() {
	char a;

	printf("‚P•¶Žš“ü—ÍH");
	scanf("%c", &a);
	if (a >='a'&& a<='z') {
		printf("•ÏŠ·Œ‹‰Ê‚Í%c‚Å‚·\n",a - 32);
	}
	else {
		if (a >= 'A' && a <= 'Z') {
			printf("•ÏŠ·Œ‹‰Ê‚Í%c‚Å‚·\n", a + 32);
		}
		else
		{
			printf("•ÏŠ·Œ‹‰Ê‚Í%c‚Å‚·\n", a);
		}
	}
}