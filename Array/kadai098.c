#include<stdio.h>
main() {
	int data[] = { 10,5,23,29,2,6,3,1,70,100 };
	int i,max,min;
	

	for (i = 1, max = data[0]; i < 10; i++) {
		if (max < data[i]) {
			max = data[i];
		}
	}

	for (i = 1, min = data[0]; i < 10; i++) {
		if (min > data[i]) {
			min = data[i];
		}
	}

	printf("”z—ñdata =");
	for (i = 0; i < 10; i++) {
		printf(" %d",data[i]);
	}
	printf("\nÅ‘å’l = %d\tÅ¬’l = %d",max,min);
	
}
