#include<stdio.h>
main()
{
	char moji1[50], moji2[50], moji3[50];
	int i;

	printf("������P����́F");
	scanf("%s", moji1);
	printf("������Q����́F");
	scanf("%s", moji2);
	printf("moji1 = %s\tmoji2 = %s\n", moji1, moji2);

	//for (i = 0; moji3[i] = moji1[i]; i++);
	//�����̓��e moji3 ���^�̊Ԏ��s�����(\0)��������ꂽ��U�ɂȂ��Ĕ�����
	for (i = 0; moji1[i] != '\0'; i++) {
		moji3[i] = moji1[i];
	}
	moji3[i] = '\0';
	for (i = 0; moji2[i] != '\0'; i++) {
		moji1[i] = moji2[i];
	}
	moji1[i] = '\0';
	for (i = 0; moji3[i] != '\0'; i++) {
		moji2[i] = moji3[i];
	}
	moji3[i] = '\0';

	printf("����ւ����\nmoji1 = %s\tmoji2 = %s\n", moji1, moji2);
}