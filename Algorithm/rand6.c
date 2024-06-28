#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int pl, cpu;

	printf("何を出しますか？\n（1:グー 2:チョキ 3:パー）＞");
	scanf("%d", &pl);
	if (pl == 1) {
		printf("プレイヤーはグーです。\n");
	}
	else {
		if (pl == 2) {
			printf("プレイヤーはチョキです。\n");
		}
		else {
				printf("プレイヤーはパーです。\n");
		}
	}
	
	srand(time(0));
	cpu = rand() % 3 ;
	if (cpu == 0) {
		printf("コンピュータはグーです。\n");
	}
	else {
		if (cpu == 1) {
			printf("コンピュータはチョキです。\n");
		}
		else {
			printf("コンピュータはパーです。\n");
		}
	}

	if ((pl == 1 && cpu == 1) || (pl == 2 && cpu == 2) || (pl== 3 && cpu == 0 )) {	//(pl-cpu+3)%3==0でもできる
		printf("プレイヤーの勝ちです。\n");
	}
	if ((pl == 1 && cpu == 0) || (pl == 2 && cpu == 1) || (pl == 3 && cpu == 2)) {	//(pl-cpu+3)%3==2でもできる
		printf("あいこです。\n");
	}
	if ((pl == 1 && cpu == 2) || (pl == 2 && cpu == 0) || (pl == 3 && cpu == 1)) {	//(pl-cpu+3)%3==1でもできる
		printf("プレイヤーの負けです。\n");
	}
}