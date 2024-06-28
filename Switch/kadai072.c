#include<stdio.h>
main() {
	char en;

	printf("アルファベット？");
	scanf("%c", &en);
	if (en >= 'A' && en <= 'Z') {
		en =en + 32;
	}
	switch (en)
	{
	case  'a':
		printf("America\n");
		printf("Australia\n");
		break;
	case 'e':
		printf("England\n");
		break;
	case 'f':
		printf("France\n");
		break;
	case 'j':
		printf("Japan\n");
		break;
	}
	
}
