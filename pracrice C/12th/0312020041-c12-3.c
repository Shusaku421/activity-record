/*2020/12/18 0312020041�@��������*/
/*�K�{�ۑ�c12-3*/
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
	printf("����a:");
	scanf("%d",&a);
	printf("����b:");
	scanf("%d", &b);
	local_s = add_retun(a, b);
	add_void(a, b,&void_s);
	add_gloal(a,b);
	printf("add_return �ł̘a=%d\n", local_s);
	printf("add_void   �ł̘a=%d\n", void_s);
	printf("add_global �ł̘a=%d\n", global_s);
}

/*���s����
����a:3
����b:4
add_return �ł̘a=7
add_void   �ł̘a=7
add_global �ł̘a=7

���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/