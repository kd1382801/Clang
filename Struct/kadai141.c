#include<stdio.h>

struct kouzou {
	char course[256];
	char kyouka[256];
	int tanni;
};

main() {
	struct kouzou kousu = { "�Q�[���\�t�gI�R�[�X","C����",8 };
	printf("�R�[�X��:%s\n", kousu.course);
	printf("���Ȗ�:%s\n", kousu.kyouka);
	printf("�P�ʐ�:%d\n", kousu.tanni);
}