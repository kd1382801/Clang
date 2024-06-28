#include<stdio.h>
main()
{
	int i;
	float sum, box[3];

	sum = 0;
	for (i = 0; i < 3; i++) {
		printf("ŽÀ”‚ð“ü—ÍF");
		scanf("%f", &box[i]);
		sum += box[i];
	}
	printf("‡Œv‚Í %.2f ‚Å‚·\n", sum);
	printf("•½‹Ï‚Í %.2f ‚Å‚·\n", sum / 3);
}