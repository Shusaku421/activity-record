/*2020/11/27 0312020041 堅岡周作*/
/*必須課題c9-1*/
#include<stdio.h>
#define N 5
int main(void) {
	int array_int[N],i;
	double  array_double[N];
	for (i = 0; i < N; i++) {
		printf("arry_int[%d]=%p\n", i, &array_int[i]);
	}
	for (i = 0; i < N; i++) {
		printf("arry_double[%d]=%p\n", i, &array_double[i]);
	}
	return 0;
}

/*実行結果
arry_int[0]=008FF78C
arry_int[1]=008FF790
arry_int[2]=008FF794
arry_int[3]=008FF798
arry_int[4]=008FF79C
arry_double[0]=008FF750
arry_double[1]=008FF758
arry_double[2]=008FF760
arry_double[3]=008FF768
arry_double[4]=008FF770

このウィンドウを閉じるには、任意のキーを押してください...

*/