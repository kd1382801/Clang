#include<stdio.h>
main() {
	int c, su1, su2;
	
	printf("数を2個入力>");
	c = scanf("%d%d", &su1,&su2);
	if (c != EOF) {
		printf("%d個入力\n", c);
	}
	else {
		printf("EOF\n");
	}
}