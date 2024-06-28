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
	struct fruit *pp=&peach;
	struct fruit *pg=&grape;
	struct fruit *pw=&watermelon;
	{

	};
	int i;
	
	pp->total = pp->price * pp->number;
	pg->total = pg->price * pg->number;
	pw->total = pw->price * pw->number;


	printf("商品名：%s\n", pp->name);
	printf("価格：%d円\t", pp->price);
	printf("お薦め度：%dポイント\n", pp->point);
	printf("個数：%d個\t", pp->number);
	printf("金額：\\%d-\n\n", pp->total);


	printf("商品名：%s\n", pg->name);
	printf("価格：%d円\t", pg->price);
	printf("お薦め度：%dポイント\n", pg->point);
	printf("個数：%d個\t", pg->number);
	printf("金額：\\%d-\n\n", pg->total);


	printf("商品名：%s\n", pw->name);
	printf("価格：%d円\t", pw->price);
	printf("お薦め度：%dポイント\n", pw->point);
	printf("個数：%d個\t", pw->number);
	printf("金額：\\%d-\n\n", pw->total);

	printf("合計金額　＝　\\%d-\n\n", pp->total + pg->total + pw->total);
}