/*2021/1/13 0312020041 ��������*/
/*���R�ۑ�f11-1*/
#include<stdio.h>
#include<math.h>
#define sqr(n) ((n)*(n))

typedef struct point{
	double x;
	double y;
}point;

typedef struct triangle{
	 point l;
     point m;
	 point n;
}tri;

int main(void) {
	double len=0;
	tri  t = { {0.0, 0.0},{2.0, 5.0},{3.0, 0.0} };
	printf("���W1(%.1f, %.1f)\n", t.l.x,t.l.y);
	printf("���W2(%.1f, %.1f)\n", t.m.x,t.m.y);
	printf("���W3(%.1f, %.1f)\n", t.n.x,t.n.y);
	len = sqrt(sqr(t.l.x - t.m.x) + sqr(t.l.y -t.m.y))
	      + sqrt(sqr(t.m.x - t.n.x) + sqr(t.m.y - t.n.y))
	      + sqrt(sqr(t.n.x - t.l.x) + sqr(t.n.y - t.l.y));
	printf("3�ӂ̒����̍��v��%.2f�ł�\n",len);
	return 0;
}

/*���s����
���W1(0.0, 0.0)
���W2(2.0, 5.0)
���W3(3.0, 0.0)
3�ӂ̒����̍��v��13.48�ł�

���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/