#include <stdio.h>
main()
{
	int d1, d2, d3, sum;
	float avg;
	printf("������3���́F");
	scanf("%d%d%d", &d1, &d2, &d3);//�����f�[�^����x�ɓ���
	sum = d1 + d2 + d3;
	avg = (float)sum / 3;//�L���X�g(�^�ϊ�)
	printf("���v= %d \t ����= %.2f \n",sum, avg);//\t(tab)���g�p
}