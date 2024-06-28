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
	struct fruit* pnum1 = &num1;
	int i;
	pnum1->total = pnum1->price * pnum1->number;

	printf("¤•i–¼F%s\n", pnum1->name);
	printf("‰¿ŠiF%d‰~\n", pnum1->price);
	printf("‚¨‘E‚ß“xF");
	for (i = 0; i != pnum1->point; i++) {
		printf("š");
	}
	printf("\n");

	printf("ŒÂ”F%dŒÂ\n", pnum1->number);
	printf("‹àŠzF\\%d-\n", pnum1->total);
}