/*自由課題1-1*/
/*	 A
	A A
   A   A
  AAAAAAA
 A       A
A         A
を表示*/

#include<stdio.h>
int main(void) {
	int len, j, c,x=-2;
	for (len = 1; len <= 6; len++) {
		for (j = 1; j <= 6 - len; j++) {
			printf(" ");
		}
		printf("A");
		if (len >= 2 && len!=4) {
			for (c = 1; c <= len + x; c++) {
				printf(" ");
			}
			printf("A");
		}
		else if (len == 4) {
			for (c = 1; c <= 6; c++) {
				printf("A");
			}
		}
		printf("\n");
		x++;
	}
	return 0;
}