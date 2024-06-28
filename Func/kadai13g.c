#include<stdio.h>
main(int argc,char* argv[]) {
	char a = 'A', b = 'B', c = 'c', d = 'D', e = 'E';


	if (*argv[1] == 'H') {
		printf("A---0x%x b---0x%x C---0x%x D---0x%x E---0x%x\n", a, b, c, d, e);
	}
	else {
		printf("A---%d b---%d C---%d D---%d E---%d\n", a, b, c, d, e);
	}
	
}