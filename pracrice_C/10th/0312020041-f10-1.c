/*2020/12/29 0312020041��������*/
/*���R�ۑ�f10-1*/
#include<stdio.h>
void str_rev_a(char rev[],char str[]) {
	int i,cnt=0;
	for (i = 0; str[i] != '\0'; i++) {
		cnt++;
	}
	for (i = 0; str[i] != '\0'; i++) {
		rev[i] = str[cnt - (i + 1)];
	}
	rev[i] = '\0';
		printf("�z��ł̋t��������@  :");
		printf("%s\n", rev);
	}

void str_rev_p(char *rev, char *str) {
	char* p,*i;
	p = str; i = rev;
	while (*p != '\0') {
		p++;
	}
	while (p > str) {
		p--;
		*i = *p;
		i++;
	}
	*i = '\0';
	printf("�|�C���^�ł̋t��������:");
	printf("%s\n", rev);
}
int main(void) {
	char s[128],rev_a[128], rev_p[128];
	printf("������:");
	scanf("%s", s);
	str_rev_a(rev_a, s);
	str_rev_p(rev_p, s);
	return 0;
}

/*���s����
������:0312020041
�z��ł̋t��������@  :1400202130
�|�C���^�ł̋t��������:1400202130

���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/