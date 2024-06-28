#include<stdio.h>
struct fruit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};

main() {
	struct fruit peach = { "peach",300,5,3,0 };
	struct fruit grape = { "grape",200,4,10,0 };
	struct fruit watermelon = { "watermelon",1500,5,8,0 };
	int i;
	
	peach.total = peach.price * peach.number;
	grape.total = grape.price * grape.number;
	watermelon.total = watermelon.price * watermelon.number;


	printf("商品名：%s\n", peach.name);
	printf("価格：%d円\t", peach.price);
	printf("お薦め度：");
	for (i = 0; i != peach.point; i++) {
		printf("★");
	}
	printf("\n");

	printf("個数：%d個\t", peach.number);
	printf("金額：\\%d-\n\n", peach.total);


	printf("商品名：%s\n", grape.name);
	printf("価格：%d円\t", grape.price);
	printf("お薦め度：");
	for (i = 0; i != grape.point; i++) {
		printf("★");
	}
	printf("\n");

	printf("個数：%d個\t", grape.number);
	printf("金額：\\%d-\n\n", grape.total);


	printf("商品名：%s\n", watermelon.name);
	printf("価格：%d円\t", watermelon.price);
	printf("お薦め度：");
	for (i = 0; i != watermelon.point; i++) {
		printf("★");
	}
	printf("\n");

	printf("個数：%d個\t", watermelon.number);
	printf("金額：\\%d-\n\n", watermelon.total);

	printf("合計金額　＝　\\%d-\n\n", peach.total + grape.total + watermelon.total);
}