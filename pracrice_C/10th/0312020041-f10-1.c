/*2020/12/29 0312020041堅岡周作*/
/*自由課題f10-1*/
#include<stdio.h>
void str_rev_a(char rev[],char str[]) {
	int i,cnt=0;
	for (i = 0; str[i] != '\0'; i++) {
		cnt++;
	}
	for (i = 0; str[i] != '\0'; i++) {
		rev[i] = str[cnt - (i + 1)];
	}
	rev[i] = '\0';
		printf("配列での逆順文字列　  :");
		printf("%s\n", rev);
	}

void str_rev_p(char *rev, char *str) {
	char* p,*i;
	p = str; i = rev;
	while (*p != '\0') {
		p++;
	}
	while (p > str) {
		p--;
		*i = *p;
		i++;
	}
	*i = '\0';
	printf("ポインタでの逆順文字列:");
	printf("%s\n", rev);
}
int main(void) {
	char s[128],rev_a[128], rev_p[128];
	printf("文字列:");
	scanf("%s", s);
	str_rev_a(rev_a, s);
	str_rev_p(rev_p, s);
	return 0;
}

/*実行結果
文字列:0312020041
配列での逆順文字列　  :1400202130
ポインタでの逆順文字列:1400202130

このウィンドウを閉じるには、任意のキーを押してください...

*/