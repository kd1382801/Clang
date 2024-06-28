#include<stdio.h>
main() 
{
	int low, high, mid, s, d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };

	printf("’Tõ’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%d", &s);
	low = 0;
	high = 10;
	while (low <= high) {
		mid = (low + high) / 2;
		if (s == d[mid])break;
		if (s > d[mid]) {
			low = mid + 1;
		}
		if (s < d[mid]) {
			high = mid - 1;
		}
	}	
	if (low > high) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else {
		printf("”z—ñ‚Ì%d”Ô–Ú‚ÉŒ©‚Â‚©‚Á‚½\n", mid);
	}

}