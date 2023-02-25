/*2020/12/29 0312020041堅岡周作*/
/*自由課題f10-2*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[]) {
	int i,x;
	char cat[128] = {'\0'};
	printf("実行時の引数:");
	for (i = 1; i < argc; i++) {
		printf("%s ",argv[i]);
	}
	x = atoi(argv[2]);
	for (i = 0; i < x; i++) {
		strcat(cat, argv[1]);
		x = atoi(argv[2]);
	}
	printf("\n%sを%d回連結した結果=%s",argv[1],x,cat);
	return 0;
}

/*実行結果
実行時の引数:Yes 5
Yesを5回連結した結果=YesYesYesYesYes
このウィンドウを閉じるには、任意のキーを押してください...
*/