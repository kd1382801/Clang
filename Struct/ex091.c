#include<stdio.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};

main() {
	struct profile data;
	struct profile* p_data;

	p_data = &data;
	printf("���O�����:");
	scanf("%s", p_data->name);
	printf("���N�������󔒂ŋ�؂��ē���:");
	scanf("%d%d%d", &p_data->birth[0], &p_data->birth[1], &p_data->birth[2]);
	printf("���t�^�����:");
	scanf("%s", p_data->blood);
	printf("%s�[�[%d�N%d��%d���� ���t�^�[%s�^\n", p_data->name,p_data->birth[0], p_data->birth[1], p_data->birth[2], p_data->blood);
}