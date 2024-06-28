#include<stdio.h>
main()
{
	int t, h, m, s;
	printf("•b”‚Ì“ü—Í");
	scanf("%d", &t);
	if (t <= 5000) {
		h = t / 3600;
		t = t % 3600;
		m = t / 60;
		s = t % 60;
		printf("%dŠÔ%d•ª%d•b‚Å‚·\n", h, m, s);
	}
	else {
		printf("ƒGƒ‰[\n");
	}
}