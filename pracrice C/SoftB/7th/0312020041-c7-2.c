/*自由課題f7-2*/
#include<stdio.h>
void mat_mul(const int a[4][3], const int b[3][4], int c[4][4]) {
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			c[i][j] = (a[i][0] * b[0][j]) + (a[i][1] * b[1][j]) + (a[i][2] * b[2][j]);
		}
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%4d", c[i][j]);
		}
		printf("\n");
	}
}
int main(void) {
	int mx[4][3] =
	{   {1,3,5},
		{6,8,4},
		{9,1,5},
		{7,6,4} };
	int my[3][4] =
	{ {2,5,8,1},
	  {9,5,3,1},
	  {4,5,6,8} };
	int mz[4][4];
	mat_mul(mx, my, mz);
	return 0;
}

/*実行結果
  49  45  47  44
 100  90  96  46
  47  75 105  50
  84  85  98  45

このウィンドウを閉じるには、任意のキーを押してください...

*/
