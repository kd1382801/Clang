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


	printf("���i���F%s\n", peach.name);
	printf("���i�F%d�~\t", peach.price);
	printf("���E�ߓx�F");
	for (i = 0; i != peach.point; i++) {
		printf("��");
	}
	printf("\n");

	printf("���F%d��\t", peach.number);
	printf("���z�F\\%d-\n\n", peach.total);


	printf("���i���F%s\n", grape.name);
	printf("���i�F%d�~\t", grape.price);
	printf("���E�ߓx�F");
	for (i = 0; i != grape.point; i++) {
		printf("��");
	}
	printf("\n");

	printf("���F%d��\t", grape.number);
	printf("���z�F\\%d-\n\n", grape.total);


	printf("���i���F%s\n", watermelon.name);
	printf("���i�F%d�~\t", watermelon.price);
	printf("���E�ߓx�F");
	for (i = 0; i != watermelon.point; i++) {
		printf("��");
	}
	printf("\n");

	printf("���F%d��\t", watermelon.number);
	printf("���z�F\\%d-\n\n", watermelon.total);

	printf("���v���z�@���@\\%d-\n\n", peach.total + grape.total + watermelon.total);
}