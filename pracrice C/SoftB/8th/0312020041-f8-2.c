/*2021/1/10 0312020041 ��������*/
/*���R�ۑ�f8-2*/
#include<stdio.h>
int main(void) {
	int i,j=0,cnt=0;
	char s[] = "abracadabra", k[1000];
	printf("��������������:");
	scanf("%s", k);
	for (i = 0; s[i] != '\0'; i++) {
		j = 0;
		while (s[i + j] == k[j]) {
			j++;
			if (k[j] == '\0') {
				cnt++;
			}
		  }
		}
	printf("%s�̏o����=%d\n", k, cnt);
	return 0;
}

/*���s����
��������������:ra
ra�̏o����=2

���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/