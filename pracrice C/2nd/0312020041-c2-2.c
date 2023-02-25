/*必須課題2-2*/
/*上底、下底、高さを入力し台形面積を求めるプログラム*/

#include<stdio.h>
int main(void) {
	double m, n, h;
	printf("3つの値を入力してください。\n");
	printf("m:");
	scanf("%lf", &m);
	printf("n:");
	scanf("%lf", &n);
	printf("h:");
	scanf("%lf", &h);
	printf("上底m、下底n、高さhの台形の面積は%fです\n",(m + n) * h / 2);
	return 0;
}