/*2020/10/23 0312020041 堅岡周作*/
/*必須課題ｃ4-1*/
#include<stdio.h>
#define number 5
int main(void) {
	int student[number],i,j;
	printf("5人の点数を入力してください\n");
	for (i = 0; i < number; i++) {
		printf("%2d番:", i+1);
		scanf("%d", &student[i]);
	}
	printf("入力された点数は以下の通りです\n");
	for (j = 0; j < number; j++) {
		printf("%2d番=%d \n",j+1,student[j]);
	}
	return 0;
}

/*実行結果
5人の点数を入力してください
 1番:83
 2番:95
 3番:85
 4番:63
 5番:89
入力された点数は以下の通りです
 1番=83
 2番=95
 3番=85
 4番=63
 5番=89

このウィンドウを閉じるには、任意のキーを押してください...

*/