/*2020/12/18 0312020041�@��������*/
/*�K�{�ۑ�c12-1*/
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
		printf("�����o���悪�J���܂���ł���\n");
	}
	else {

		fp = fopen("12input.txt", "r");
		if (fp == NULL) {
			printf("�t�@�C��12input.txt���J���܂���ł���\n");
		}
		else {
			while (fscanf(fp, "%s%d", d[i].name, &d[i].value) == 2) {
				printf("%s%d\n", d[i].name, d[i].value);
				sum += d[i].value;
				i++;
			}
			printf("���v=%d\n", sum);
			fclose(fp);
		}

		for (i = 0; i <=2; i++) {
			fprintf(dfp, "%s%d\n",d[i].name, d[i].value);
		}
		fprintf(dfp, "���v=%d\n", sum);
		printf("12input.txt�̓��e��12output.txt�ɏ������݂�����\n");
		fclose(dfp);
	}
	return 0;
}

/*���s����
two2
four4
six6
���v=12
12input.txt�̓��e��12output.txt�ɏ������݂�����

���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/