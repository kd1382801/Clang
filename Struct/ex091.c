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
	printf("–¼‘O‚ð“ü—Í:");
	scanf("%s", p_data->name);
	printf("¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
	scanf("%d%d%d", &p_data->birth[0], &p_data->birth[1], &p_data->birth[2]);
	printf("ŒŒ‰tŒ^‚ð“ü—Í:");
	scanf("%s", p_data->blood);
	printf("%s[[%d”N%dŒŽ%d“ú¶ ŒŒ‰tŒ^[%sŒ^\n", p_data->name,p_data->birth[0], p_data->birth[1], p_data->birth[2], p_data->blood);
}