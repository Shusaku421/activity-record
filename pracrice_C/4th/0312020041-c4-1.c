/*2020/10/23 0312020041 ��������*/
/*�K�{�ۑ肃4-1*/
#include<stdio.h>
#define number 5
int main(void) {
	int student[number],i,j;
	printf("5�l�̓_������͂��Ă�������\n");
	for (i = 0; i < number; i++) {
		printf("%2d��:", i+1);
		scanf("%d", &student[i]);
	}
	printf("���͂��ꂽ�_���͈ȉ��̒ʂ�ł�\n");
	for (j = 0; j < number; j++) {
		printf("%2d��=%d \n",j+1,student[j]);
	}
	return 0;
}

/*���s����
5�l�̓_������͂��Ă�������
 1��:83
 2��:95
 3��:85
 4��:63
 5��:89
���͂��ꂽ�_���͈ȉ��̒ʂ�ł�
 1��=83
 2��=95
 3��=85
 4��=63
 5��=89

���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/