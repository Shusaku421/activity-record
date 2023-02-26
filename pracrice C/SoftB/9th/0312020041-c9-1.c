/*必須課題c9-1*/
/*
要素数が n である int型の配列 と double型の配列 を宣言し
それぞれの配列の領域がメモリ上にどのように確保されているかを
確認するため，各領域の（先頭の）アドレスを出力するプログラム
*/

#include<stdio.h>

#define N 5

int main(void) {
	int array_int[N];
	double  array_double[N];
	int *p_array_int[N];
	double *p_array_double[N];

	for (int i = 0; i < N; i++) {
		p_array_int[i]= &array_int[i];
	}
	for (int i = 0; i < N; i++) {
		p_array_double[i]= &array_double[i];
	}

	for (int i = 0; i < N; i++) {
		printf("array_int[%d] = %p\n", i, p_array_int[i]);
	}
	for (int i = 0; i < N; i++) {
		printf("array_double[%d] = %p\n", i, p_array_double[i]);
	}
/*別解
	for (int i = 0; i < N; i++) {
		printf("arry_int[%d]=%p\n", i, &array_int[i]);
	}
	for (int i = 0; i < N; i++) {
		printf("arry_double[%d]=%p\n", i, &array_double[i]);
	}
	*/
	return 0;
}

/*���s����
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

���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/