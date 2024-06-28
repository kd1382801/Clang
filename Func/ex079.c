#include<stdio.h>
int tbl_gokei3(int tbl[],int number);

main() {
	int a[] = { 10,20,30,40,50 }, gokei;

	gokei = tbl_gokei3(a,5);
	printf("gokei = %d\n", gokei);
}

int tbl_gokei3(int tbl[],int number) {
	int gokei = 0, i = 0;
	
	while (i < number) {
		gokei += tbl[i];
		i++;
	}
	return gokei;
}
