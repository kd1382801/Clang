#include<stdio.h>
main() {
	int c[10], i,j;

	for (i = 0; i < 10; i++) {
		printf("����(-999�ŏI��)�H");
		scanf("%d", &c[i]);
		if (c[i] == -999)break;
	}
	
	printf("�z��c =");
	for (j=0; j < i; j++) {
		printf(" %d",c[j]);
	}

	
}
