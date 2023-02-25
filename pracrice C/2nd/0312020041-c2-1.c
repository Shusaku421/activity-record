/*必須課題2-1*/
/*キーボードから2つの値を入力させ
その商と余りを表示するプログラム*/

#include<stdio.h>
int main(void) {
	int a, b;
	printf("数値を入力（a）:");
	scanf("%d", &a);
	printf("数値を入力（b）:");
	scanf("%d", &b);
	printf("a÷b = %d, 余りは %d\n", a / b, a % b);
	return 0;
}