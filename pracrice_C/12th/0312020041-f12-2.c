/*2021/1/17 0312020041 ��������*/
/*���R�ۑ�f12-2*/
#include<stdio.h>

void str_sep_a(char str[], char x[], char y[]) {
	int ssa,a=0,b=0;
	for (ssa = 0; str[ssa] != '\0'; ssa++) {
		if (ssa % 2 == 0) {
			x[a] = str[ssa];
			a++;
		}
		else {
			y[b] = str[ssa];
			b++;
		}
	}
}

void str_sep_p(char* str, char* x, char* y) {
	int i = 0;
	str--;
	while (*str != '\0') {
		str++;
		if (i % 2 == 0) {
			*x = *str;
			x++;
		}
		else {
			*y = *str;
			y++;
		}
		i++;
}
}

int main(void) {
	char s[128], aa[128] = {'\0'}, ba[128] = {'\0'}, ap[128]={'\0'}, bp[128]={'\0'};
	printf("���͕�����:");
	scanf("%s", &s);
	str_sep_a(s, aa, ba);
	str_sep_p(s, ap, bp);
	printf("str_sep_a�ł̌���\n");
	printf("������1=%s\n������2=%s\n", aa, ba);
	printf("str_sep_p�ł̌���\n");
	printf("������1=%s\n������2=%s\n", ap, bp);
}

/*���s����
���͕�����:tbauxsi
str_sep_a�ł̌���
������1=taxi
������2=bus
str_sep_p�ł̌���
������1=taxi
������2=bus

���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/