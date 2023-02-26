#include<stdio.h>
int ga, gb;
void swap(void) {
	int i;
	i = ga;
	ga = gb;
	gb = i;
}

int main(void) {
	printf("二つの整数を入力してください。\n");
	printf("整数1:");
	scanf("%d", &ga);
	printf("整数2:");
	scanf("%d", &gb);
	swap();
	printf("交換後の整数1の値=%2d,整数2の値=%2d\n", ga,gb);
	return 0;
}

/*実行結果
二つの整数を入力してください。
整数1:85
整数2:9
交換後の整数1の値= 9,整数2の値=85

このウィンドウを閉じるには、任意のキーを押してください...
*/