/*2020/12/18 0312020041　堅岡周作*/
/*必須課題c12-1*/
#include<stdio.h>

struct data {
	char name[8];
	int value;
};

int main(void) {
	int sum = 0,i=0;
	FILE *fp,*dfp;
	struct data d[3];

	dfp = fopen("12output.txt", "w");
	if (dfp == NULL) {
		printf("書き出し先が開けませんでした\n");
	}
	else {

		fp = fopen("12input.txt", "r");
		if (fp == NULL) {
			printf("ファイル12input.txtが開けませんでした\n");
		}
		else {
			while (fscanf(fp, "%s%d", d[i].name, &d[i].value) == 2) {
				printf("%s%d\n", d[i].name, d[i].value);
				sum += d[i].value;
				i++;
			}
			printf("合計=%d\n", sum);
			fclose(fp);
		}

		for (i = 0; i <=2; i++) {
			fprintf(dfp, "%s%d\n",d[i].name, d[i].value);
		}
		fprintf(dfp, "合計=%d\n", sum);
		printf("12input.txtの内容を12output.txtに書き込みが完了\n");
		fclose(dfp);
	}
	return 0;
}

/*実行結果
two2
four4
six6
合計=12
12input.txtの内容を12output.txtに書き込みが完了

このウィンドウを閉じるには、任意のキーを押してください...

*/