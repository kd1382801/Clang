#include<stdio.h>
main() {
	int num1;
	char en;

	printf("�P�O�i���̐����H");
	scanf("%d", &num1);
	printf("�A���t�@�x�b�g(o or h or d)�H");
	scanf("%s", &en);

	if (en >= 'A' && en <= 'Z') {
		en += 32;
	}

	switch (en)
	{
	case  'o':
		printf("%o\n",num1);
		break;
	case 'h':
		printf("%x\n", num1);
		break;
	default:
		printf("%d\n", num1);
		break;
	}
	
}
