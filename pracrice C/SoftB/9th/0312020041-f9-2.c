/*自由課題f9-2*/
/*
西暦*y年*m月*d日䛾日付を“前の日”あるいは
“次の日”の日付に更新する関数を作成せよ．
*/


#include<stdio.h>
void decrement_date(int *y,int *m,int *d){
	if ((*y % 400 == 0 || (*y % 4 == 0 && *y%100 != 0)) && (*m == 3 && *d == 1)) { /*�O�̓�*/
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
	printf("前の日は %d 年 %d 月 %d 日です\n", *y, *m, *d);
}

void increment_date(int* y, int* m, int* d) {
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
	printf("次の日は %d 年 %d 月 %d 日です\n", *y, *m, *d);
}

int main(void) {
	int i;
	int *y, *m, *d;
	printf("日付を入力\n");
	printf("年:");  scanf("%d", &y);
	printf("月:");  scanf("%d", &m);
	printf("日:");  scanf("%d", &d);
	printf("\n");
	printf("%d 年 %d 月 %d 日が入力されました\n", y, m, d);
	printf("\n");
	printf("次の日⇒ 1, 前の日⇒ 0 を入力してください\n");
	printf("1 or 0:");  scanf("%d", &i);
	if (i == 0) {
		decrement_date(&y, &m, &d);
	}
	else {
		increment_date(&y, &m, &d);
	}
	return 0;
}