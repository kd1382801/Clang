#include<stdio.h>
long bekijyou(int a,int b);
main() {
	int a,b;
	long kotae;

	printf("���l�P�H�F");
	scanf("%d", &a);
	printf("���l�P�H�F");
	scanf("%d", &b);
	kotae = bekijyou(a, b);
	printf("%d��%d��́A%ld\n", a, b, kotae);
	
}

long bekijyou(int a, int b) {
	long kotae=1;
	while (b > 0) {
		kotae *= a;
		b--;
	}
	return kotae;
}