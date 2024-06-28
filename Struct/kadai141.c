#include<stdio.h>

struct kouzou {
	char course[256];
	char kyouka[256];
	int tanni;
};

main() {
	struct kouzou kousu = { "ゲームソフトIコース","C言語",8 };
	printf("コース名:%s\n", kousu.course);
	printf("教科名:%s\n", kousu.kyouka);
	printf("単位数:%d\n", kousu.tanni);
}