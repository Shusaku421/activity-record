/*2020/11/13 0312020041　堅岡周作*/
/*自由課題f7-1*/
#include<stdio.h>
#define N 5
void intary_rcpy(int v1[],const int v2[],int n) {
	int i;
	for (i = 0; i < n; i++) {
		v1[i] = v2[5 - (i + 1)];
	}
}

int main(void) {
	int x1[N], x2[N], i;
	for (i = 0; i < N; i++) {
		printf("x1[%d]:", i);
		scanf("%2d", &x1[i]);
	}

	intary_rcpy(x2,x1,N);
	printf("反転コピーしました\n");
	for (i = 0; i < N; i++) {
		printf("x2[%d]:=%d\n",i,x2[i]);
	}
	return 0;
}

/*実行結果
x1[0]:11
x1[1]:31
x1[2]:51
x1[3]:71
x1[4]:91
反転コピーしました
x2[0]:=91
x2[1]:=71
x2[2]:=51
x2[3]:=31
x2[4]:=11

このウィンドウを閉じるには、任意のキーを押してください...

*/