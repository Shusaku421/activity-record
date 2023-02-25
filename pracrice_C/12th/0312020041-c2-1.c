/*2020/10/09 0312020041 堅岡周作*/
/*必須課題c2-1*/
#include<stdio.h>
int main(void) {
	int a, b;
	printf("2つの値を入力してください\n");
	printf("a:");
	scanf("%d", &a);
	printf("b:");
	scanf("%d", &b);
	printf("aをbで割ると、商%d、余り%dです\n", a / b, a % b);
	return 0;
}
/*実行結果
2つの値を入力してください
a:255
b:13
aをbで割ると、商19、余り8です

このウィンドウを閉じるには、任意のキーを押してください...

*/