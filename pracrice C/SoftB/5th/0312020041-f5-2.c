/*2020/11/16 0312020041 堅岡周作*/
/*自由課題f5-2*/
#include<stdio.h>
int main(void) {
	int array[4][3] =
	{ {1,2,3},
		{4,5,6},
		{7,8,9},
		{10,11,12} };
	int array2[3][4] =
	{ {1,2,3,4},
	  {5,6,7,8},
	{9,10,11,12}};
	int answer[4][4],i,j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			answer[i][j] = (array[i][0] * array2[0][j]) + (array[i][1] * array2[1][j]) + (array[i][2] * array2[2][j]);
		}
	}
		for (i = 0; i < 4; i++) {
			for (j = 0; j < 4; j++) {
				printf("%4d", answer[i][j]);
			}
			printf("\n");
		}
		return 0;
}

/*実行結果
  38  44  50  56
  83  98 113 128
 128 152 176 200
 173 206 239 272

このウィンドウを閉じるには、任意のキーを押してください...

*/