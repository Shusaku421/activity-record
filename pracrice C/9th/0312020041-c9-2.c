/*2020/11/27 0312020041 ��������*/
/*�K�{�ۑ�c9-2*/
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

/*���s����
a=100 b=10

���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/