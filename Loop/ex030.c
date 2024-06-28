#include<stdio.h>
main()
{
	int su, cnt;
	cnt = 0;

	printf("”‚ğ“ü‚ê‚ÄF");
	scanf("%d", &su);
	while (cnt < 11) {
		printf("%d + %d = %d\n", su, cnt, su + cnt);
		cnt++;
	}
}