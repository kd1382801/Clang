#include<stdio.h>
main() {
	int c, su1, su2;
	
	printf("����2����>");
	c = scanf("%d%d", &su1,&su2);
	if (c != EOF) {
		printf("%d����\n", c);
	}
	else {
		printf("EOF\n");
	}
}