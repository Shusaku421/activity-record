/*2020/11/13 0312020041�@��������*/
/*�K�{�ۑ�c7-1*/
#include<stdio.h>
#define N 3
int min_of(const int v[],int n){
	int o,min = v[0];
	for (o = 0; o < N; o++) {
		if (min > v[o]) {
			min = v[o];
		}
	}
	return min;
}

int main(void) {
	int e[N],m[N],i;
	int min_e, min_m;
	printf("3�l�̓_������͂��Ă�������\n");
	for (i = 0; i < N; i++) {
		printf("[%d]�p��:",i + 1);
		scanf("%d", &e[i]);
		printf("   ���w:");
		scanf("%d", &m[i]);
	}
	min_e = min_of(e, N);
	min_m = min_of(m, N);
	printf("�p��̍Œ�_=%d\n", min_e);
	printf("���w�̍Œ�_=%d\n", min_m);
	return 0;
}

/*���s����
3�l�̓_������͂��Ă�������
[1]�p��:21
   ���w:25
[2]�p��:37
   ���w:11
[3]�p��:15
   ���w:50
�p��̍Œ�_=15
���w�̍Œ�_=11

���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/