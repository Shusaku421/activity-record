/*必須課題c3-2*/
/*【入力値】回だけ繰り返し整数値を入力させ，入力した整数値の合計値を表示するプログラムを作成せよ．*/

#include<stdio.h>
int main(void) {
	int number,input,sum=0,i;
	printf("入力する整数は何個ですか？:");
	scanf("%d", &number);
	for (i = 1; i <= number; i++) {
		printf("整数%d:",i);
		scanf("%d", &input);
		sum = sum + input;
	}
	printf("合計値:%d:\n", sum);
	return 0;
}