#include<stdio.h>
main()
{
	char moji1[50], moji2[50], moji3[50];
	int i;

	printf("文字列１を入力：");
	scanf("%s", moji1);
	printf("文字列２を入力：");
	scanf("%s", moji2);
	printf("moji1 = %s\tmoji2 = %s\n", moji1, moji2);

	//for (i = 0; moji3[i] = moji1[i]; i++);
	//代入先の内容 moji3 が真の間実行される(\0)が代入されたら偽になって抜ける
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

	printf("入れ替えると\nmoji1 = %s\tmoji2 = %s\n", moji1, moji2);
}