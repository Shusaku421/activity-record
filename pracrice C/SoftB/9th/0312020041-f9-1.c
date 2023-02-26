/*自由課題f9-1*/
/*
n の指す値が0より小さければに0更新し
100より大きければ100に更新する関数adjust_pointを作成せよ．
*/

#include<stdio.h>

void adjust_point(int *n){
	if(*n < 0){
		*n=0;
		printf("値を更新しました\n%d\n", *n);
	}
	if(*n > 100){
		*n=100;
		printf("値を更新しました\n%d\n", *n);
	}
}

int main(void){
	int n;
	scanf("%d", &n);
	adjust_point(&n);
}