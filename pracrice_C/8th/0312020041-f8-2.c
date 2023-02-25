/*2021/1/10 0312020041 堅岡周作*/
/*自由課題f8-2*/
#include<stdio.h>
int main(void) {
	int i,j=0,cnt=0;
	char s[] = "abracadabra", k[1000];
	printf("検索文字列を入力:");
	scanf("%s", k);
	for (i = 0; s[i] != '\0'; i++) {
		j = 0;
		while (s[i + j] == k[j]) {
			j++;
			if (k[j] == '\0') {
				cnt++;
			}
		  }
		}
	printf("%sの出現回数=%d\n", k, cnt);
	return 0;
}

/*実行結果
検索文字列を入力:ra
raの出現回数=2

このウィンドウを閉じるには、任意のキーを押してください...

*/