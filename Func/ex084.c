#include<stdio.h>
void strcnt(char* p1, char* p2);

main() {
	char str1[256], str2[256];

	printf("•¶š—ñH:");
	gets(str1);
	strcnt(str1, str2);
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
}

void strcnt(char* p1,char *p2) {
	int cnt, i;

	for (cnt = 0; *(p1 + cnt) != '\0'; cnt++);
	cnt--;
	i = 0;
	while (*(p1 + i) != '\0') {
		*(p2 + cnt) = *(p1 + i);
		i++;
		cnt--;
	}
	*(p2 + i) = '\0';
	return;
}
