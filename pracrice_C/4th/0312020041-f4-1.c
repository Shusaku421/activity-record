/*2020/11/15 0312020041 堅岡周作*/
/*自由課題f4-1*/
#include<stdio.h>
#define number 5
int main(void) {
	int student[number],i,j,n,max,max2=0,f=0,t;
	printf("5人の点数を入力してください\n");
	for (i = 0; i < number; i++) {
		printf("%2d番の点数:", i + 1);
		scanf("%d", &student[i]);
	}
	max = student[0];
	for (j = 0; j < number; j++) {
		if (max < student[j]) {
			max = student[j];
			f = j;
		}
		else {
			max2 = student[j];
			t = j;
		}
	}

	for (n = 0; n < number; n++) {
		if ((max2 < student[n]) && (max>student[n])) {
				max2 = student[n];
				t = n;
			}
	}

	printf("最高点は%d番目の学生で%d点\n2番目に高い点は%d番目の学生で%d点\n",1+f,max,1+t,max2);
	return 0;
}
/*実行結果
5人の点数を入力してください
 1番の点数:83
 2番の点数:95
 3番の点数:85
 4番の点数:63
 5番の点数:89
最高点は2番目の学生で95点
2番目に高い点は5番目の学生で89点

このウィンドウを閉じるには、任意のキーを押してください...

*/