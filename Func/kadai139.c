#include<stdio.h>
void display(int a,char moji);
main() {
	int num;
	char m;

	printf("文字？：");
	scanf("%c", &m);
	printf("整数？：");
	scanf("%d", &num);
	display(num,m);
	
}

void display(int a,char moji) {
	while (a > 0) {
		printf("%c",moji);
		a--;
	}
	return;
}