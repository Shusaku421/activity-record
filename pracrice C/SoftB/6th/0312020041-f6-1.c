/*2020/11/16 0312020041 堅岡周作*/
/*自由課題f6-1*/
#include<stdio.h>
double area(double x, double y) {
	double t = x * y;
	return t;
}
double volume(double s, double h) {
	double v = s * h;
	return v;
}

int main(void) {
	double a, b, c,i;
	printf("横の長さ:");
	scanf("%lf", &a);
	printf("縦の長さ:");
	scanf("%lf", &b);
	printf("高さ:");
	scanf("%lf", &c);
	i=area(a, b);
	printf("体積=%.2f", volume(i, c));
	return 0;
}

/*実行結果
横の長さ:3.1
縦の長さ:4.2
高さ:5.0
体積=65.10
このウィンドウを閉じるには、任意のキーを押してください...

*/