/*必須課題c3-1*/
/*
点数（0～100点）をキーボードから入力させ成績判定するプログラム
80点以上の時は「優」， 70点以上の時は「良」， 60点以上の時は「可」， 59点以下の時は「不可」と判定する．
*/

#include<stdio.h>
int main(void) {
	int score;
	printf("点数を入力してください（0～100）\n");
	scanf("%d", &score);
	if (score < 0 || score>100) {
		printf("%d点は 判定できません\n",score);
	}
	else if (score >= 80) {
		printf("%d点は　優\n",score);
	}
	else if (score >= 70) {
		printf("%d点は　良\n", score);
	}
	else if (score >= 60) {
		printf("%d点は　可\n", score);
	}
	else {
		printf("%d点は　不可\n", score);
	}
	return 0;
}