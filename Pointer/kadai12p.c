#include<stdio.h>
main() {
	char* day[] = { "Sunday","Monday","Tuesday", "Wednesday","Thursday", "Friday", "Saturday", NULL };
	char** p;
	int i;

	p = day;
	for (i = 0; i < 7; i++) {
		printf("%s\n", day[i]);
	}
	for (i = 0; i < 7; i++) {
		printf("%s\n", * (p + i));
	}
}