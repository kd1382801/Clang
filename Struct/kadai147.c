#include<stdio.h>
#include<string.h>
struct animal {
	int no;
	char name[20];
	char color[10];
};
struct animal data[50] = { {30,"dog","white"},{50,"tiger","yellow"},{60,"horse","brown"} }, * p_data = data;
int data_size = 3;
int* pds = &data_size;

void hyouzi(void);
void tuika(void);
void kensaku(void);

main() {
	char menu,dumy[256];

	while (1) {
		printf("\n処理メニュー (Xの入力で終了します)\n１：データ表示　２：データ追加　３：データ検索　　処理は？");
		scanf("%c", &menu);
		gets(dumy);

		if (menu == 'X') break;
		switch (menu)
		{
			case'1':
				hyouzi();
				break;
			case'2':
				tuika();
				break;
			case'3':
				kensaku();
				break;
			default:
				break;
		}
		
	}
}

void hyouzi(void) {
	int i;

	for (i = 0; i < *pds; i++) {
		printf("番号：%d\t名前：%s\t色：%s\n", (p_data + i)->no, (p_data + i)->name, (p_data + i)->color);
	}
	return;
}

void tuika(void) {
	char dumy[256];

	if (*pds == 50) {
		printf("データサイズが最大値になりました。\n\n");
		return;
	}

	printf("データの追加を行いますので入力してください。\n");
	printf("番号＞");
	scanf("%d", &(p_data + *pds)->no);
	gets(dumy);
	printf("名前＞");
	gets((p_data + *pds)->name);;
	printf("色＞");
	gets((p_data + *pds)->color);
	*pds += 1;
	return;
}

void kensaku(void) {
	char moji[256],dumy[256];
	int num,jo,i;

	printf("登録されているデータの検索を行います。\n");
	printf("検索項目 (１.番号：２．名前：３．色)＞");
	scanf("%d", &jo);
	gets(dumy);

	switch (jo)
	{
	case 1:
		printf("検索する番号＞");
		scanf("%d", &num);
		gets(dumy);
		printf("検索結果\n");
		for (i = 0; i < *pds; i++) {
			if ((p_data + i)->no == num) {
				printf("番号：%d\t名前：%s\t色：%s\n", (p_data + i)->no, (p_data + i)->name, (p_data + i)->color);
			}
		}
		break;

	case 2:
		printf("検索する名前＞");
		gets(moji);
		printf("検索結果\n");
		for (i = 0; i < *pds; i++) {
			if (strcmp((p_data+i)->name,moji) == 0) {
				printf("番号：%d\t名前：%s\t色：%s\n", (p_data + i)->no, (p_data + i)->name, (p_data + i)->color);
			}
		}
		break;

	case 3:
		printf("検索する色＞");
		gets(moji);
		printf("検索結果\n");
		for (i = 0; i < *pds; i++) {
			if (strcmp((p_data + i)->color, moji) == 0) {
				printf("番号：%d\t名前：%s\t色：%s\n", (p_data + i)->no, (p_data + i)->name, (p_data + i)->color);
			}
		}
		break;
	}
	return;
}