#include<stdio.h>
main() {
	char data[10] = "Language";
	char* p_data, s;
	int i;

	p_data = data;
	printf("data[] = %s\n", p_data);
	printf("���������́H");
	scanf("%c", &s);
	printf("�������ʂ́A");
	i = 0;
	while (*(p_data+i)) {
		if (s == *(p_data+i)) {
			printf(" %d", i+1);
		}
		i++;
	}
	printf("�����ڂł�\n");
}