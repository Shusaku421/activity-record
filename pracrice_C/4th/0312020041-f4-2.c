/*2020/11/15 0312020041 ��������*/
/*���R�ۑ�f4-2*/
#include<stdio.h>
int main(void) {
	int a[5] = { 3,1,5,6,2 }, i, j;
	double b[5];
	for (i = 0; i <= 4; i++) {
		b[i] = a[5 - (i + 1)];
	}
	for (i = 0; i <= 4; i++) {
		b[i] = b[i]/3;
	}
	printf(" a,   b\n");
	for (j = 0; j <= 4; j++) {
		printf("%2d, %.2f\n", a[j], b[j]);
	}
	return 0;
}

/*���s����
 a,   b
 3, 0.67
 1, 2.00
 5, 1.67
 6, 0.33
 2, 1.00

���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/