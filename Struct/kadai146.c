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


	printf("���i���F%s\n", pp->name);
	printf("���i�F%d�~\t", pp->price);
	printf("���E�ߓx�F%d�|�C���g\n", pp->point);
	printf("���F%d��\t", pp->number);
	printf("���z�F\\%d-\n\n", pp->total);


	printf("���i���F%s\n", pg->name);
	printf("���i�F%d�~\t", pg->price);
	printf("���E�ߓx�F%d�|�C���g\n", pg->point);
	printf("���F%d��\t", pg->number);
	printf("���z�F\\%d-\n\n", pg->total);


	printf("���i���F%s\n", pw->name);
	printf("���i�F%d�~\t", pw->price);
	printf("���E�ߓx�F%d�|�C���g\n", pw->point);
	printf("���F%d��\t", pw->number);
	printf("���z�F\\%d-\n\n", pw->total);

	printf("���v���z�@���@\\%d-\n\n", pp->total + pg->total + pw->total);
}