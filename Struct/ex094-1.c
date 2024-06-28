#include<stdio.h>
#include<string.h>
#define NIN 5
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day date;
	char blood[5];
};



main() {
	struct profile a[NIN] = { {"a",1,1,1,"A"},{"b",2,2,2,"B"},{"c",3,3,3,"O"},{"aa",2,2,4,"AB"},{"aaa",5,5,5,"A"}};
	struct profile* p_a;
	int  i;
	for (i = 0, p_a = a; i < NIN;i++,p_a++) {
		if (p_a->date.tuki == 2) {
			printf("%s[[%d”N%dŒŽ%d“ú¶‚Ü‚ê ŒŒ‰tŒ^[%sŒ^\n", p_a->name, p_a->date.nen, p_a->date.tuki, p_a->date.hi, p_a->blood);
		}
	}
}
