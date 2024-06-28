#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
};

void display3(struct syohin_data* p);

main() {
	struct syohin_data syohin = { "ƒPƒVƒSƒ€",50 };

	display3(&syohin);
}

void display3(struct syohin_data* p) {
	printf("%s  %d\n", p->name, p->tanka);
}