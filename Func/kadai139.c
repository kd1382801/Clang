#include<stdio.h>
void display(int a,char moji);
main() {
	int num;
	char m;

	printf("�����H�F");
	scanf("%c", &m);
	printf("�����H�F");
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