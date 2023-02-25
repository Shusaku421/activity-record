/*2020/12/18 0312020041@Œ˜‰ªüì*/
/*•K{‰Û‘èc12-3*/
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
	printf("®”a:");
	scanf("%d",&a);
	printf("®”b:");
	scanf("%d", &b);
	local_s = add_retun(a, b);
	add_void(a, b,&void_s);
	add_gloal(a,b);
	printf("add_return ‚Å‚Ì˜a=%d\n", local_s);
	printf("add_void   ‚Å‚Ì˜a=%d\n", void_s);
	printf("add_global ‚Å‚Ì˜a=%d\n", global_s);
}

/*ÀsŒ‹‰Ê
®”a:3
®”b:4
add_return ‚Å‚Ì˜a=7
add_void   ‚Å‚Ì˜a=7
add_global ‚Å‚Ì˜a=7

‚±‚ÌƒEƒBƒ“ƒhƒE‚ğ•Â‚¶‚é‚É‚ÍA”CˆÓ‚ÌƒL[‚ğ‰Ÿ‚µ‚Ä‚­‚¾‚³‚¢...

*/