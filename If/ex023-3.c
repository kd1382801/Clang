#include<stdio.h>
main()
{
	int e, no1, no2;

	printf("‰‰Zq‚ğ“ü—ÍF");
	scanf("%d", &e);
	printf("‚Q‚Â‚Ì®”‚ğ“ü—Í");
	scanf("%d%d", &no1, &no2);
	if (e == 1) {
		printf("%d\n", no1 + no2);
	}
	else {
		if (e == 2) {
			printf("%d\n", no1 - no2);
		}
		else {
			if (e == 3) {
				printf("%d\n", no1 * no2);
			}
			else {
				if (e == 4) {
					printf("%d\n", no1 / no2);
				}
			}
		}
	}
}