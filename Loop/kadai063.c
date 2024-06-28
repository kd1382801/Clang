#include<stdio.h>
main()
{
	int i=0;
	while (i++!=20) {
		printf("%3d",i);
		if (i == 10) {
			printf("\n");
		}
	}

}
