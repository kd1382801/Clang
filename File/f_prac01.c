#include<stdio.h>
main()
{
	int score = 0;
	char ch, name[20];
	FILE* fp;

	printf("�v���C���[������́F");
	scanf("%s", name);

	while (1) {
		printf("�X�R�A�F%d�i'e'�ŏI���j\n", score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		score++;
	}

	if (fp = fopen("score.txt", "w")) {
		fprintf(fp, "%s\n%d\n", name, score);
		fclose(fp);
	}
}