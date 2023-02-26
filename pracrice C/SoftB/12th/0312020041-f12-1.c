/*2021/1/17 0312020041 堅岡周作*/
/*自由課題f12-1*/
#include<stdio.h>
int main(void) {
	int cnt_a[26] = { 0 },j=0;
	char s[128];
	printf("入力文字列:");
	scanf("%s", s);
	for (j = 0; s[j] != '\0';j++) {
		if (s[j] >= 65 && s[j] <= 90) {
			cnt_a[(int)s[j] - 65]++;
		}
		else {
			if (s[j] >= 90 && s[j] <= 122) {
				cnt_a[(int)s[j] - 97]++;
			}
		}
}
	for (j = 0; j < 26; j++) {
		if (cnt_a[j] > 0) {
			printf("%c=%d\n", 65 + j, cnt_a[j]);
		}
	}
	return 0;
}

/*実行結果
入力文字列:Abracadabra
A=5
B=2
C=1
D=1
R=2

このウィンドウを閉じるには、任意のキーを押してください...

*/