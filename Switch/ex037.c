#include<stdio.h>
main()
{
	char en;
	
	printf("‰‰Zq‚ğ“ü‚ê‚ÄF");
	scanf("%c", &en);
	switch (en) {
		case '+':
			printf("‰ÁZ‚Å‚·\n");
			break;
		case '-':
			printf("Œ¸Z‚Å‚·\n");
			break;
		case'*':
			printf("æZ‚Å‚·\n");
			break;
		case'/':
			printf("œZ‚Å‚·\n");
			break;
		case'%':
			printf("‚ ‚Ü‚è‚Å‚·\n");
			break;
		default:
			printf("‚»‚Ì‘¼‚Å‚·\n");
	}
}