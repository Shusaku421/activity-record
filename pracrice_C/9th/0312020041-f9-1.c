/*2020/12/29 0312020041 ��������*/
/*�K�{�ۑ�f9-1*/
#include<stdio.h>
void adjust_point(int *n){
	int i;
	printf("�����l�̓���:");
	scanf("%d", &i);
	*n = i;
	if (*n > 100) {
		printf("�l���X�V\n");
		*n = 100;
	}
	else {
		if (*n < 0) {
			printf("�l���X�V\n");
			*n = 0;
		}
		else {
		}
	}
	printf("%d", *n);
}
int main(void) {
	int* a;
	adjust_point(&a);
	return 0;
}

/*���s����
�����l�̓���:-100
�l���X�V
0
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...
*/

/*
�����l�̓���:0
0
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...
*/

/*
�����l�̓���:150
�l���X�V
100
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...
*/