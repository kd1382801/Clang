#include<stdio.h>
main()
{
	int i;
	float sum, box[3];

	sum = 0;
	for (i = 0; i < 3; i++) {
		printf("��������́F");
		scanf("%f", &box[i]);
		sum += box[i];
	}
	printf("���v�� %.2f �ł�\n", sum);
	printf("���ς� %.2f �ł�\n", sum / 3);
}