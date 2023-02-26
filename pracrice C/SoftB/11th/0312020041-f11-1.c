/*2021/1/13 0312020041 堅岡周作*/
/*自由課題f11-1*/
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
	printf("座標1(%.1f, %.1f)\n", t.l.x,t.l.y);
	printf("座標2(%.1f, %.1f)\n", t.m.x,t.m.y);
	printf("座標3(%.1f, %.1f)\n", t.n.x,t.n.y);
	len = sqrt(sqr(t.l.x - t.m.x) + sqr(t.l.y -t.m.y))
	      + sqrt(sqr(t.m.x - t.n.x) + sqr(t.m.y - t.n.y))
	      + sqrt(sqr(t.n.x - t.l.x) + sqr(t.n.y - t.l.y));
	printf("3辺の長さの合計は%.2fです\n",len);
	return 0;
}

/*実行結果
座標1(0.0, 0.0)
座標2(2.0, 5.0)
座標3(3.0, 0.0)
3辺の長さの合計は13.48です

このウィンドウを閉じるには、任意のキーを押してください...

*/