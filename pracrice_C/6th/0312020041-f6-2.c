/*2020/11/16 0312020041 堅岡周作*/
/*自由課題f6-2*/
#include<stdio.h>
int ga, gb;
void swap(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("swap関数内での整数1の値=%d,整数2の値=%d\n", x, y);
	temp = gb;
	gb = ga;
	ga = temp;
	printf("swap関数内での変数gaの値=%d,変数gbの値=%d\n", ga, gb);
}
int main(void) {
	int a, b;
	printf("二つの整数を入力してください\n");
	printf("整数1:");
	scanf("%d", &ga);
	printf("整数2:");
	scanf("%d", &gb);
	a = ga;
	b = gb;
	swap(ga, gb);
	printf("main関数内での整数1の値=%d,整数2の値=%d\n", a, b);
	printf("main関数内での変数gaの値=%d,変数gbの値=%d\n", ga, gb);
	return 0;
}

/*実行結果
二つの整数を入力してください
整数1:85
整数2:9
swap関数内での整数1の値=9,整数2の値=85
swap関数内での変数gaの値=9,変数gbの値=85
main関数内での整数1の値=85,整数2の値=9
main関数内での変数gaの値=9,変数gbの値=85

このウィンドウを閉じるには、任意のキーを押してください...

*/