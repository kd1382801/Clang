#include<stdio.h>
main() {
	char* p = "Nippon";
	int i;
	
	for (i = 0; *(p + i) != '\0'; i++);
	printf("逆順に表示すると、");

	i--;
	while (i >= 0) {
		printf("%c", *(p + i));
		i--;
	}
}
