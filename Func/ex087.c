#include<stdio.h>
#include<stdlib.h>
main(int argc, char* argv[]) {
	if (argc >= 3) {
		int i, sum;

		for (i = 1,sum=0; i < argc; i++) {
			sum += atoi(argv[i]);
		}
		printf("���v = %d\n", sum);
		
	}
	else {
		printf("�G���[\n");
	}
}