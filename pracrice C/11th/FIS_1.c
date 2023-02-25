#include<stdio.h>
int main(void) {
	int m, w, s;
	scanf("%d", &w);
	scanf("%d", &m);
	scanf("%d", &s);
	if (s <= m && w - s <= m) {
		printf("3");
	}
	else if (s <= m && w - s >= m) {
			printf("1");
		}
	else if (s >= m && w - s <= m) {
		printf("2");
	}
	else {
		printf("0");
	}
	return 0;
}