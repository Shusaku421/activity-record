/*2021/1/17 0312020041 堅岡周作*/
/*自由課題f12-2*/
#include<stdio.h>

void str_sep_a(char str[], char x[], char y[]) {
	int ssa,a=0,b=0;
	for (ssa = 0; str[ssa] != '\0'; ssa++) {
		if (ssa % 2 == 0) {
			x[a] = str[ssa];
			a++;
		}
		else {
			y[b] = str[ssa];
			b++;
		}
	}
}

void str_sep_p(char* str, char* x, char* y) {
	int i = 0;
	str--;
	while (*str != '\0') {
		str++;
		if (i % 2 == 0) {
			*x = *str;
			x++;
		}
		else {
			*y = *str;
			y++;
		}
		i++;
}
}

int main(void) {
	char s[128], aa[128] = {'\0'}, ba[128] = {'\0'}, ap[128]={'\0'}, bp[128]={'\0'};
	printf("入力文字列:");
	scanf("%s", &s);
	str_sep_a(s, aa, ba);
	str_sep_p(s, ap, bp);
	printf("str_sep_aでの結果\n");
	printf("文字列1=%s\n文字列2=%s\n", aa, ba);
	printf("str_sep_pでの結果\n");
	printf("文字列1=%s\n文字列2=%s\n", ap, bp);
}

/*実行結果
入力文字列:tbauxsi
str_sep_aでの結果
文字列1=taxi
文字列2=bus
str_sep_pでの結果
文字列1=taxi
文字列2=bus

このウィンドウを閉じるには、任意のキーを押してください...

*/