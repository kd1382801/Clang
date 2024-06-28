#include<stdio.h>
struct kouzou {
	char course[256];
	char kyouka[256];
	int tanni[2];
};

main() {
	struct kouzou kouzoutai;
	struct kouzou* pk;

	pk = &kouzoutai;
	printf("コース名：");
	scanf("%s", pk->course);
	printf("教科名：");
	scanf("%s", pk->kyouka);
	printf("単位数：");
	scanf("%d", pk->tanni);

	printf("コース名：%s\n教科名：%s\n単位数：%d\n", pk->course, pk->kyouka, pk->tanni[0]);
}