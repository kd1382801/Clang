#include<stdio.h>
main() {
	int c, su1, su2;
	
	printf("”‚ð2ŒÂ“ü—Í>");
	c = scanf("%d%d", &su1,&su2);
	if (c != EOF) {
		printf("%dŒÂ“ü—Í\n", c);
	}
	else {
		printf("EOF\n");
	}
}