/*2020/12/11 0312020041 堅岡周作*/
/*必須課題c11-1*/
#include<stdio.h>
#define NAME_LEN 64
struct student {
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;
};

int main(void) {
	struct student takao = { "Takao",173,86.2 };
	printf("氏　名=%p\n", &takao.name);
	printf("身　長=%p\n", &takao.height);
	printf("体　重=%p\n", &takao.weight);
	printf("奨学金=%p\n", &takao.schols);
	return 0;
}

/*実行結果
氏　名=0117F718
身　長=0117F758
体　重=0117F75C
奨学金=0117F760

このウィンドウを閉じるには、任意のキーを押してください...

*/