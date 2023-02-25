/*2021/1/13 0312020041 堅岡周作*/
/*自由課題f11-2*/
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
		printf("座標1(%.1f, %.1f)\n", t.l.x, t.l.y);
		printf("座標2(%.1f, %.1f)\n", t.m.x, t.m.y);
		printf("座標3(%.1f, %.1f)\n", t.n.x, t.n.y);
		calc_triangle(&t);
		printf("3辺の長さの合計は%.2f\n", t.sum_edges);
		printf("三角形の面積は%.2f\n", t.area);
		return 0;
}

/*実行結果
座標1(2.0, 1.0)
座標2(3.0, 5.0)
座標3(4.0, 2.0)
3辺の長さの合計は9.52
三角形の面積は3.50

このウィンドウを閉じるには、任意のキーを押してください...

*/