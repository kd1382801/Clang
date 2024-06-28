#include<stdio.h>
long bekijyou(int a,int b);
main() {
	int a,b;
	long kotae;

	printf("数値１？：");
	scanf("%d", &a);
	printf("数値１？：");
	scanf("%d", &b);
	kotae = bekijyou(a, b);
	printf("%dの%d乗は、%ld\n", a, b, kotae);
	
}

long bekijyou(int a, int b) {
	long kotae=1;
	while (b > 0) {
		kotae *= a;
		b--;
	}
	return kotae;
}