#include<stdio.h>
main() {
	long idata;

	printf("整数？");
	scanf("%ld", &idata);
	printf("2倍すると%ld\n3倍すると%ld\n4倍すると%ld\n", idata*2,idata*3,idata*4);
}