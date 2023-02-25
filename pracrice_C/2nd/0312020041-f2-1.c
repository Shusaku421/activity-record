/*自由課題2-1*/
/*入力された税込価格から、価格に含まれる消費税額と本体価格を表示するプログラム*/
#include<stdio.h>
int main(void) {
	int pri,ppri,tax;
	double rate=1.15;
	printf("税込価格から本体価格を計算します。\n");
	printf("税込価格は？:");
	scanf("%d", &pri);
	tax= (pri *15/(rate*100));
	ppri = pri - tax;
	printf("この商品の消費税額は、%d円\n",tax);
	printf("この商品の本体価格は、%d円\n",ppri);
}
