/*2021/1/10 0312020041 堅岡周作*/
/*自由課題f8-1*/
#include<stdio.h>
int main(void) {
	int i;
	char c;
	printf("最初の文字を入力:");
	scanf("%c", &c);
	for(i=0;i<5;i++){
		printf("%c=0x%x=%d\n", c + i, c + i, c + i);
	}
	return 0;
}

/*実行結果
最初の文字を入力:m
m=0x6d=109
n=0x6e=110
o=0x6f=111
p=0x70=112
q=0x71=113

このウィンドウを閉じるには、任意のキーを押してください...

*/

/*
最初の文字を入力:8
8=0x38=56
9=0x39=57
:=0x3a=58
;=0x3b=59
<=0x3c=60

C:\Users\MrBlu\OneDrive\デスクトップ\授業資料\1年後期\ソフトウェア演習B（金曜２）\20201120\Project1\Debug\Project3.exe (プロセス 25816) は、コード 0 で終了しました。

*/