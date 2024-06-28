#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int gacha, i;

	srand(time(0));
	for (i = 0; i < 10; i++) {
		gacha = rand() % 100 + 1;
		if (gacha >= 50) {
			printf("★　ノーマル\n");
		}
		else {
			if (gacha >= 20) {
				printf("★★　レア\n");
			}
			else {
				if (gacha >= 6) {
					printf("★★★　SR\n");
				}
				else {
					if (gacha >= 2) {
						printf("★★★★　UR\n");
					}
					else {
						printf("★★★★★　LR\n");
					}
				}
			}
		}
	}
}