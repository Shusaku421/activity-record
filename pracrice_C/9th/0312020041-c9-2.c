/*2020/11/27 0312020041 堅岡周作*/
/*必須課題c9-2*/
#include <stdio.h>
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int a = 10;
	int b = 100;
	swap(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}

/*実行結果
a=100 b=10

このウィンドウを閉じるには、任意のキーを押してください...

*/