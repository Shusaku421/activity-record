/*2020/12/29 0312020041 ��������*/
/*�K�{�ۑ�f9-2*/
#include<stdio.h>
void decrement_date(int *y,int *m,int *d){
	if ((*y % 400 == 0 || (*y % 4 == 0 && *y%100 != 0)) && (*m == 3 && *d == 1)) { /*�O�̓�*/
		*m = 2; *d = 29;
	}
	else {
		if ((*m % 2 == 0 || *m == 1 || *m == 9 || *m == 11) && *d == 1) {
			if (*m == 1) {
				*y = *y - 1; *m = 12; *d = 31;
			}
			else {
				*m = *m - 1; *d = 31;
			}
		}

		else {
			if (*d == 1) {
				*m = *m - 1; *d = 30;
			}
			else {
				*d = *d - 1;
			}
		}
	}
	printf("���t�� ����%d�N%d��%d�� �֍X�V\n", *y, *m, *d);
}

void increment_date(int* y, int* m, int* d) {/*���̓�*/
	if ((*y % 400 == 0 || (*y % 4 == 0 && *y % 100 != 0)) && (*m == 2 && *d == 28 || *d==29)) {
			*m = 2; *d = *d+1;
			if (*d == 30) {
				*m = 3; *d = 1;
			}
	}

	else {
		if ((*m % 2 != 0 || *m == 8 || *m == 10 || *m == 12) && *d == 31) {
			if (*m == 12) {
				*y = *y + 1; *m = 1; *d = 1;
			}
			else {
				*m = *m + 1; *d = 1;
			}
		}

		else {
			if (*d == 30) {
				*m = *m + 1; *d = 1;
			}
			else {
				*d = *d + 1;
			}
		}
	}
	printf("���t�� ����%d�N%d��%d�� �֍X�V\n", *y, *m, *d);
}

int main(void) {
	int i;
	int* a, * b, * c;
	printf("�N�����̓���\n");
	printf("�N:");  scanf("%d", &a);
	printf("��:");  scanf("%d", &b);
	printf("��:");  scanf("%d", &c);
	printf("\n");
	printf("���͂��ꂽ���t:����%d�N%d��%d��\n", a, b, c);
	printf("\n");
	printf("���̓��ɍX�V����ꍇ��1\n�O�̓��ɍX�V����ꍇ��0�����\n");
	printf("1or0:");  scanf("%d", &i);
	if (i == 0) {
		decrement_date(&a, &b, &c);
	}
	else {
		increment_date(&a, &b, &c);
	}
	return 0;
}

/*
�N�����̓���
�N:2021
��:1
��:1

���͂��ꂽ���t:����2021�N1��1��

���̓��ɍX�V����ꍇ��1
�O�̓��ɍX�V����ꍇ��0�����
1or0:0
���t�� ����2020�N12��31�� �֍X�V

���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/