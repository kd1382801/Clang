#include<stdio.h>
main()
{
	int t, h, m, s;
	printf("�b���̓���");
	scanf("%d", &t);
	if (t <= 5000) {
		h = t / 3600;
		t = t % 3600;
		m = t / 60;
		s = t % 60;
		printf("%d����%d��%d�b�ł�\n", h, m, s);
	}
	else {
		printf("�G���[\n");
	}
}