#include<stdio.h>
main() {
	char* p = "Nippon";
	int i;
	
	for (i = 0; *(p + i) != '\0'; i++);
	printf("‹t‡‚É•\Ž¦‚·‚é‚ÆA");

	i--;
	while (i >= 0) {
		printf("%c", *(p + i));
		i--;
	}
}
