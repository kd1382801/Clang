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
	printf("�R�[�X���F");
	scanf("%s", pk->course);
	printf("���Ȗ��F");
	scanf("%s", pk->kyouka);
	printf("�P�ʐ��F");
	scanf("%d", pk->tanni);

	printf("�R�[�X���F%s\n���Ȗ��F%s\n�P�ʐ��F%d\n", pk->course, pk->kyouka, pk->tanni[0]);
}