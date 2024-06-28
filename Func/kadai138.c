#include<stdio.h>
void display(int a);
main() {
	int num;

	printf("®”HF");
	scanf("%d", &num);
	display(num);
	
}

void display(int a) {
	while (a > 0) {
		printf("*");
		a--;
	}
	return;
}