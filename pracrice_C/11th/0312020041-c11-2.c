/*2020/12/11 0312020041 ��������*/
/*�K�{�ۑ�c11-2*/
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
		printf("�Œ�������%d�~�����A������%d�~�ł�\n", g - 793, ds);
	}
	else {
		printf("�Œ�������%d�~�Ⴂ�ł����A������%d�~�ł�\n", 793-g, ds);
	}

}

int main(void) {
	struct pTimeJob a;
	printf("����(�~)�́H:");
	scanf("%d", &a.hourly_wage);
	printf("�J������(hours)�́H:");
	scanf("%lf", &a.working_hours);
	printf("�x�e����(hours)�́H:");
	scanf("%lf", &a.rest_hours);
	eval_pTimeJob(&a);
	return 0;
}

/*���s����
����(�~)�́H:1000
�J������(hours)�́H:12.5
�x�e����(hours)�́H:0.5
�Œ�������207�~�����A������12000�~�ł�

���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/