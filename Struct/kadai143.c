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

	printf("���i���F%s\n", num1.name);
	printf("���i�F%d�~\n", num1.price);
	printf("���E�ߓx�F");
	for (i = 0; i != num1.point; i++) {
		printf("��");
	}
	printf("\n");

	printf("���F%d��\n", num1.number);
	printf("���z�F\\%d-\n", num1.total);
}