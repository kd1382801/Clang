#include<stdio.h>
main() {
	char* p_ride[3] = { "car", "bus", "shinkansen" },*p;
	char ride[3][11] = { "car", "bus", "shinkansen" };
	int i;

	for (i = 0; i < 3; i++) {
		p = p_ride[i];
		while (*p) {
			putchar(*p++);
		}
		putchar('\n');
		//printf("%s\n", ride[i]);
	}
	//printf("ride‚ÌÁ”ïƒƒ‚ƒŠ:%d\n", sizeof ride);
}