/*2020/11/15 0312020041 ��������*/
/*���R�ۑ�f4-1*/
#include<stdio.h>
#define number 5
int main(void) {
	int student[number],i,j,n,max,max2=0,f=0,t;
	printf("5�l�̓_������͂��Ă�������\n");
	for (i = 0; i < number; i++) {
		printf("%2d�Ԃ̓_��:", i + 1);
		scanf("%d", &student[i]);
	}
	max = student[0];
	for (j = 0; j < number; j++) {
		if (max < student[j]) {
			max = student[j];
			f = j;
		}
		else {
			max2 = student[j];
			t = j;
		}
	}

	for (n = 0; n < number; n++) {
		if ((max2 < student[n]) && (max>student[n])) {
				max2 = student[n];
				t = n;
			}
	}

	printf("�ō��_��%d�Ԗڂ̊w����%d�_\n2�Ԗڂɍ����_��%d�Ԗڂ̊w����%d�_\n",1+f,max,1+t,max2);
	return 0;
}
/*���s����
5�l�̓_������͂��Ă�������
 1�Ԃ̓_��:83
 2�Ԃ̓_��:95
 3�Ԃ̓_��:85
 4�Ԃ̓_��:63
 5�Ԃ̓_��:89
�ō��_��2�Ԗڂ̊w����95�_
2�Ԗڂɍ����_��5�Ԗڂ̊w����89�_

���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/