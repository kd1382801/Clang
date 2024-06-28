// 1101015 kadai093.c
#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int c[10], i;

	printf("”z—ña‚Æ”z—ñb‚Ì‰ÁŽZŒ‹‰Ê‚ð”z—ñc‚ÉŠi”[‚·‚é\n”z—ñ a =");
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);
		c[i] = a[i];
	}
	printf("\n”z—ñ b =");
	for (i = 0; i < 10; i++) {
		printf("%d ", b[i]);
		c[i] += b[i];
	}
	printf("\n”z—ñ c =");
	for (i = 0; i < 10; i++) {
		printf("%d ", c[i]);
	}
}
