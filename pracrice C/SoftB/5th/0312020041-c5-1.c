/*0312020041 2020/10/30 ��������*/
/*�K�{�ۑ�c5-1*/
#include<stdio.h>
int main(void) {
	int array[2][3],i,j;
	for (i = 0; i <= 1; i++) {
		for (j = 0; j <= 2; j++) {
			printf("array[%d][%d]:", i, j);
			scanf("%2d", &array[i][j]);
		}
	}
	printf("������ʂ��o�͂��܂�\n");
	for (i = 0; i <= 1; i++) {
		for (j = 0; j <= 2; j++) {
			printf("array[%d][%d]:%2d ", i, j,array[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/*���s����
array[0][0]:5
array[0][1]:10
array[0][2]:15
array[1][0]:20
array[1][1]:25
array[1][2]:30
������ʂ��o�͂��܂�
array[0][0]: 5 array[0][1]:10 array[0][2]:15
array[1][0]:20 array[1][1]:25 array[1][2]:30

���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/