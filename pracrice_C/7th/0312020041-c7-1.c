/*2020/11/13 0312020041　堅岡周作*/
/*必須課題c7-1*/
#include<stdio.h>
#define N 3
int min_of(const int v[],int n){
	int o,min = v[0];
	for (o = 0; o < N; o++) {
		if (min > v[o]) {
			min = v[o];
		}
	}
	return min;
}

int main(void) {
	int e[N],m[N],i;
	int min_e, min_m;
	printf("3人の点数を入力してください\n");
	for (i = 0; i < N; i++) {
		printf("[%d]英語:",i + 1);
		scanf("%d", &e[i]);
		printf("   数学:");
		scanf("%d", &m[i]);
	}
	min_e = min_of(e, N);
	min_m = min_of(m, N);
	printf("英語の最低点=%d\n", min_e);
	printf("数学の最低点=%d\n", min_m);
	return 0;
}

/*実行結果
3人の点数を入力してください
[1]英語:21
   数学:25
[2]英語:37
   数学:11
[3]英語:15
   数学:50
英語の最低点=15
数学の最低点=11

このウィンドウを閉じるには、任意のキーを押してください...

*/