#include<stdio.h>
struct fruit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};

main() {
	struct fruit num1 = { "peach",300,5,3,0 };
	int i;
	num1.total = num1.price * num1.number;

	printf("商品名：%s\n", num1.name);
	printf("価格：%d円\n", num1.price);
	printf("お薦め度：");
	for (i = 0; i != num1.point; i++) {
		printf("★");
	}
	printf("\n");

	printf("個数：%d個\n", num1.number);
	printf("金額：\\%d-\n", num1.total);
}