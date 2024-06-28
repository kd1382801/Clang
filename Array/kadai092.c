// 1101015 kadai092.c
#include<stdio.h>
main()
{
	int i, a[10] = { 10,20,30,40,50,60,70,80,90,100 }, c[10];
	
	printf("配列aから配列cにコピー\n配列a =");
	for (i = 0; i<10; i++) {
		printf(" %d", a[i]);
		c[i] = a[i];
	}
	printf("\n配列c =");
	for (i = 0; i < 10; i++) {
		printf(" %d", c[i]);
	}

}