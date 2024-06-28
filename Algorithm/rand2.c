#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int dice, i;

	srand(time(0));
	for (i = 0; i < 10; i++) {
		dice = (rand() % 6) + 1;//(0～5が出てくる)+1
		printf("サイコロは%dです\n", dice);
	}
}