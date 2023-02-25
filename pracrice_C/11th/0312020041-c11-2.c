/*2020/12/11 0312020041 堅岡周作*/
/*必須課題c11-2*/
#include<stdio.h>
struct pTimeJob {
	int hourly_wage;
	double working_hours;
	double rest_hours;
};

void eval_pTimeJob(struct pTimeJob *cond) {
	int g= cond->hourly_wage,ds=0;
	double wt = cond->working_hours, rt = cond->rest_hours;
	ds = (int)g * (wt - rt);
	if (g > 793) {
		printf("最低賃金より%d円高く、日給は%d円です\n", g - 793, ds);
	}
	else {
		printf("最低賃金より%d円低いですが、日給は%d円です\n", 793-g, ds);
	}

}

int main(void) {
	struct pTimeJob a;
	printf("時給(円)は？:");
	scanf("%d", &a.hourly_wage);
	printf("労働時間(hours)は？:");
	scanf("%lf", &a.working_hours);
	printf("休憩時間(hours)は？:");
	scanf("%lf", &a.rest_hours);
	eval_pTimeJob(&a);
	return 0;
}

/*実行結果
時給(円)は？:1000
労働時間(hours)は？:12.5
休憩時間(hours)は？:0.5
最低賃金より207円高く、日給は12000円です

このウィンドウを閉じるには、任意のキーを押してください...

*/