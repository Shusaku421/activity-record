/*2020/12/18 0312020041　堅岡周作*/
/*必須課題c12-3*/
#include<stdio.h>
int global_s;

int add_retun(int x, int y){
	return x + y;
}

void add_void(int x, int y,int *z) {
	*z = x + y;
}

void add_gloal (int x, int y) {
	global_s = x + y;
}
int main(void) {
	int a, b;
	int local_s, void_s;
	printf("整数a:");
	scanf("%d",&a);
	printf("整数b:");
	scanf("%d", &b);
	local_s = add_retun(a, b);
	add_void(a, b,&void_s);
	add_gloal(a,b);
	printf("add_return での和=%d\n", local_s);
	printf("add_void   での和=%d\n", void_s);
	printf("add_global での和=%d\n", global_s);
}

/*実行結果
整数a:3
整数b:4
add_return での和=7
add_void   での和=7
add_global での和=7

このウィンドウを閉じるには、任意のキーを押してください...

*/