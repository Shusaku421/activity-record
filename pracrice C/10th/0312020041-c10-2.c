/*2020/11/04 0312020041��������*/
/*�K�{�ۑ�c10-2*/
#include<stdio.h>
void str_connnect_a(char con[], char str1[], char str2[]) {
	int x, y;
	for (x = 0; str1[x]!= '\0'; x++) {
		con[x] = str1[x];
	}
		for (y = 0; str2[y]!= '\0'; y++) {
			con[y+x] = str2[y];
		}
		con[x+y] = '\0';
}

void str_connnect_p(char *con, char *str1, char *str2) {
	char* a = con;
	while (*con++= *str1++) {
	}
	con--;
	while (*con++ = *str2++) {
	}
}

int main(void) {
	char s1[60], s2[60],con_a[128], con_p[128];
	printf("������1:");
	scanf("%s",&s1);
	printf("������2:");
	scanf("%s", &s2);
	str_connnect_a(con_a, s1, s2);
	str_connnect_p(con_p, s1, s2);
	printf("�z��ł̘A��������=%s\n", con_a);
	printf("�|�C���^�ł̘A��������=%s\n", con_p);
	return 0;
}

/*���s����
������1:0312020041
������2:��������
�z��ł̘A��������=0312020041��������
�|�C���^�ł̘A��������=0312020041��������

���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/