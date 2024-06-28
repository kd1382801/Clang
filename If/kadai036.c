#include<stdio.h>
main() {
	int a,b;

	printf("®”‚PH");
	scanf("%d", &a);
	printf("®”‚QH");
	scanf("%d", &b);
	if (a==b) {
		printf("%d‚Æ%d‚Í“™‚µ‚¢\n",a,b);
	}
	else {
		if (a > b) {
			printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d‘å‚«‚¢\n",a,b,a-b);
		}
		else
		{
			printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢\n", a, b, b - a);
		}
		
	}
}