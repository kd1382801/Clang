#include<stdio.h>
main() {
	double idata,jdata;

	printf("�Q�̎����l�H");
	scanf("%lf%lf", &idata,&jdata);
	printf("***%f��%f�̎l�����Z***\n�a=%f ��=%f ��=%f ��=%f", idata,jdata,idata+jdata,idata-jdata,idata*jdata,idata/jdata);
}