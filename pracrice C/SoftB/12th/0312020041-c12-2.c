/*2020/12/18 0312020041　堅岡周作*/
/*必須課題c12-2*/
#include<stdio.h>
#define R_NUM 3
#define C_NUM 5

int main(void) {
	int a[R_NUM][C_NUM],i,j,b=1;
	printf("(R_NUMを3,C_NUMを5とし1～29を格納した結果)\n");
	printf("元の行列\n");

	for (i = 0; i < R_NUM; i++) {
		for (j = 0; j < C_NUM; j++) {
			a[i][j] = b;
			b=b+2;
			printf(" %2d", a[i][j]);
		}
		printf("\n");
	}

	printf("行列入れ替え\n");
	for (i = 0; i < C_NUM; i++) {
		for (j = 0; j < R_NUM; j++) {
			a[j][i] = a[j][i];
			printf(" %2d", a[j][i]);
		}
		printf("\n");
	}
	return 0;
}

/*実行結果
(R_NUMを3,C_NUMを5とし1～29を格納した結果)
元の行列
  1  3  5  7  9
 11 13 15 17 19
 21 23 25 27 29
行列入れ替え
  1 11 21
  3 13 23
  5 15 25
  7 17 27
  9 19 29

このウィンドウを閉じるには、任意のキーを押してください...

*/