/*2020/12/29 0312020041 堅岡周作*/
/*必須課題f9-2*/
#include<stdio.h>
void decrement_date(int *y,int *m,int *d){
	if ((*y % 400 == 0 || (*y % 4 == 0 && *y%100 != 0)) && (*m == 3 && *d == 1)) { /*前の日*/
		*m = 2; *d = 29;
	}
	else {
		if ((*m % 2 == 0 || *m == 1 || *m == 9 || *m == 11) && *d == 1) {
			if (*m == 1) {
				*y = *y - 1; *m = 12; *d = 31;
			}
			else {
				*m = *m - 1; *d = 31;
			}
		}

		else {
			if (*d == 1) {
				*m = *m - 1; *d = 30;
			}
			else {
				*d = *d - 1;
			}
		}
	}
	printf("日付を 西暦%d年%d月%d日 へ更新\n", *y, *m, *d);
}

void increment_date(int* y, int* m, int* d) {/*次の日*/
	if ((*y % 400 == 0 || (*y % 4 == 0 && *y % 100 != 0)) && (*m == 2 && *d == 28 || *d==29)) {
			*m = 2; *d = *d+1;
			if (*d == 30) {
				*m = 3; *d = 1;
			}
	}

	else {
		if ((*m % 2 != 0 || *m == 8 || *m == 10 || *m == 12) && *d == 31) {
			if (*m == 12) {
				*y = *y + 1; *m = 1; *d = 1;
			}
			else {
				*m = *m + 1; *d = 1;
			}
		}

		else {
			if (*d == 30) {
				*m = *m + 1; *d = 1;
			}
			else {
				*d = *d + 1;
			}
		}
	}
	printf("日付を 西暦%d年%d月%d日 へ更新\n", *y, *m, *d);
}

int main(void) {
	int i;
	int* a, * b, * c;
	printf("年月日の入力\n");
	printf("年:");  scanf("%d", &a);
	printf("月:");  scanf("%d", &b);
	printf("日:");  scanf("%d", &c);
	printf("\n");
	printf("入力された日付:西暦%d年%d月%d日\n", a, b, c);
	printf("\n");
	printf("次の日に更新する場合は1\n前の日に更新する場合は0を入力\n");
	printf("1or0:");  scanf("%d", &i);
	if (i == 0) {
		decrement_date(&a, &b, &c);
	}
	else {
		increment_date(&a, &b, &c);
	}
	return 0;
}

/*
年月日の入力
年:2021
月:1
日:1

入力された日付:西暦2021年1月1日

次の日に更新する場合は1
前の日に更新する場合は0を入力
1or0:0
日付を 西暦2020年12月31日 へ更新

このウィンドウを閉じるには、任意のキーを押してください...

*/