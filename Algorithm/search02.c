#include<stdio.h>
main()
{
	int i, s, d[11] = { 10,5,30,77,16,3,47,29,37,33,0 };

	printf("�T���l����͂��Ă�������>");
	scanf("%d", &s);
	d[10] = s;
	for (i = 0; s != d[i]; i++);
	if (i >= 10) {
		printf("������Ȃ�����\n");
	}
	else {
		printf("�z���%d�ԖڂɌ�������\n", i);
	}
}	