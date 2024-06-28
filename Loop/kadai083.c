#include<stdio.h>
main()
{
	int i;
	for (i = 1; i > 0;i++) {
		if (i >= 20)break;
		if (i % 2 == 0)continue;
		printf(" %d", i);
	}
}