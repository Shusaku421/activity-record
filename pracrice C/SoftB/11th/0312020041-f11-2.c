/*2021/1/13 0312020041 ��������*/
/*���R�ۑ�f11-2*/
#include<stdio.h>
#include<math.h>
#define sqr(n) ((n)*(n))

typedef struct point {
	double x;
	double y;
}point;

typedef struct triangle{
	point l, m, n;
	double sum_edges, area;
}triangle;
triangle t= { {2.0, 1.0}, { 3.0, 5.0}, { 4.0, 2.0 },0,0 };

void calc_triangle(struct triangle *tri){
	double s,are;
	double el_m, em_n, en_l;
	el_m = sqrt(sqr(t.l.x - t.m.x) + sqr(t.l.y - t.m.y));
	em_n = sqrt(sqr(t.m.x - t.n.x) + sqr(t.m.y - t.n.y));
	en_l = sqrt(sqr(t.n.x - t.l.x) + sqr(t.n.y - t.l.y));
	s = el_m + em_n + en_l;
	double n = s / 2;
	are = sqrt(n * (n - el_m) * (n - em_n) * (n - en_l));
	tri->sum_edges = s;
	tri->area = are;
}

int main(void) {
		printf("���W1(%.1f, %.1f)\n", t.l.x, t.l.y);
		printf("���W2(%.1f, %.1f)\n", t.m.x, t.m.y);
		printf("���W3(%.1f, %.1f)\n", t.n.x, t.n.y);
		calc_triangle(&t);
		printf("3�ӂ̒����̍��v��%.2f\n", t.sum_edges);
		printf("�O�p�`�̖ʐς�%.2f\n", t.area);
		return 0;
}

/*���s����
���W1(2.0, 1.0)
���W2(3.0, 5.0)
���W3(4.0, 2.0)
3�ӂ̒����̍��v��9.52
�O�p�`�̖ʐς�3.50

���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/