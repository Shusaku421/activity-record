/*2020/11/13 0312020041�@��������*/
/*���R�ۑ�f7-1*/
#include<stdio.h>
#define N 5
void intary_rcpy(int v1[],const int v2[],int n) {
	int i;
	for (i = 0; i < n; i++) {
		v1[i] = v2[5 - (i + 1)];
	}
}

int main(void) {
	int x1[N], x2[N], i;
	for (i = 0; i < N; i++) {
		printf("x1[%d]:", i);
		scanf("%2d", &x1[i]);
	}

	intary_rcpy(x2,x1,N);
	printf("���]�R�s�[���܂���\n");
	for (i = 0; i < N; i++) {
		printf("x2[%d]:=%d\n",i,x2[i]);
	}
	return 0;
}

/*���s����
x1[0]:11
x1[1]:31
x1[2]:51
x1[3]:71
x1[4]:91
���]�R�s�[���܂���
x2[0]:=91
x2[1]:=71
x2[2]:=51
x2[3]:=31
x2[4]:=11

���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/