/*2020/11/04 0312020041堅岡周作*/
/*必須課題c10-2*/
#include<stdio.h>
void str_connnect_a(char con[], char str1[], char str2[]) {
	int x, y;
	for (x = 0; str1[x]!= '\0'; x++) {
		con[x] = str1[x];
	}
		for (y = 0; str2[y]!= '\0'; y++) {
			con[y+x] = str2[y];
		}
		con[x+y] = '\0';
}

void str_connnect_p(char *con, char *str1, char *str2) {
	char* a = con;
	while (*con++= *str1++) {
	}
	con--;
	while (*con++ = *str2++) {
	}
}

int main(void) {
	char s1[60], s2[60],con_a[128], con_p[128];
	printf("文字列1:");
	scanf("%s",&s1);
	printf("文字列2:");
	scanf("%s", &s2);
	str_connnect_a(con_a, s1, s2);
	str_connnect_p(con_p, s1, s2);
	printf("配列での連結文字列=%s\n", con_a);
	printf("ポインタでの連結文字列=%s\n", con_p);
	return 0;
}

/*実行結果
文字列1:0312020041
文字列2:堅岡周作
配列での連結文字列=0312020041堅岡周作
ポインタでの連結文字列=0312020041堅岡周作

このウィンドウを閉じるには、任意のキーを押してください...

*/