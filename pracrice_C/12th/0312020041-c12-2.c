/*2020/12/18 0312020041�@��������*/
/*�K�{�ۑ�c12-2*/
#include<stdio.h>
#define R_NUM 3
#define C_NUM 5

int main(void) {
	int a[R_NUM][C_NUM],i,j,b=1;
	printf("(R_NUM��3,C_NUM��5�Ƃ�1�`29���i�[��������)\n");
	printf("���̍s��\n");

	for (i = 0; i < R_NUM; i++) {
		for (j = 0; j < C_NUM; j++) {
			a[i][j] = b;
			b=b+2;
			printf(" %2d", a[i][j]);
		}
		printf("\n");
	}

	printf("�s�����ւ�\n");
	for (i = 0; i < C_NUM; i++) {
		for (j = 0; j < R_NUM; j++) {
			a[j][i] = a[j][i];
			printf(" %2d", a[j][i]);
		}
		printf("\n");
	}
	return 0;
}

/*���s����
(R_NUM��3,C_NUM��5�Ƃ�1�`29���i�[��������)
���̍s��
  1  3  5  7  9
 11 13 15 17 19
 21 23 25 27 29
�s�����ւ�
  1 11 21
  3 13 23
  5 15 25
  7 17 27
  9 19 29

���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/