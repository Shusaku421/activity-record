/*0312020041 2020/10/30 堅岡周作*/
/*必須課題c5-1*/
#include<stdio.h>
int main(void) {
	int array[2][3],i,j;
	for (i = 0; i <= 1; i++) {
		for (j = 0; j <= 2; j++) {
			printf("array[%d][%d]:", i, j);
			scanf("%2d", &array[i][j]);
		}
	}
	printf("代入結果を出力します\n");
	for (i = 0; i <= 1; i++) {
		for (j = 0; j <= 2; j++) {
			printf("array[%d][%d]:%2d ", i, j,array[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/*実行結果
array[0][0]:5
array[0][1]:10
array[0][2]:15
array[1][0]:20
array[1][1]:25
array[1][2]:30
代入結果を出力します
array[0][0]: 5 array[0][1]:10 array[0][2]:15
array[1][0]:20 array[1][1]:25 array[1][2]:30

このウィンドウを閉じるには、任意のキーを押してください...

*/