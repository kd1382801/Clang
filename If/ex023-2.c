#include<stdio.h>
main()
{
	int y;
	printf("¼—ï‚ğ“ü—ÍF");
	scanf("%d", &y);
	if (y % 400 == 0 || (y%4==0 && y%100!=0)) {
		printf("‚¤‚é‚¤”N‚Å‚·\n");
	}
	else {
		printf("‚¤‚é‚¤”N‚Å‚Í‚ ‚è‚Ü‚¹‚ñ\n");
	}

}