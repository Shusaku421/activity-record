/*2020/11/16 0312020041 ��������*/
/*���R�ۑ�f6-1*/
#include<stdio.h>
double area(double x, double y) {
	double t = x * y;
	return t;
}
double volume(double s, double h) {
	double v = s * h;
	return v;
}

int main(void) {
	double a, b, c,i;
	printf("���̒���:");
	scanf("%lf", &a);
	printf("�c�̒���:");
	scanf("%lf", &b);
	printf("����:");
	scanf("%lf", &c);
	i=area(a, b);
	printf("�̐�=%.2f", volume(i, c));
	return 0;
}

/*���s����
���̒���:3.1
�c�̒���:4.2
����:5.0
�̐�=65.10
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/