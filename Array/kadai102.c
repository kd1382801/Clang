#include<stdio.h>
main() {
	int b[5][5] = { {3,6,9,12,15},{18,21,24,27,30},{33,36,39,42,45},{48,51,54,57,60},{63,66,69,72,75} };
	int c[5][5];
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			c[i][j] = b[i][j];
		}
	}

	printf("”z—ñc‚Ì“à—e\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%3d",c[i][j]);
		}
		printf("\n");
	}
}