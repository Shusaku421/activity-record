/*2020/11/16 0312020041 ��������*/
/*���R�ۑ�f6-2*/
#include<stdio.h>
int ga, gb;
void swap(int x, int y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
	printf("swap�֐����ł̐���1�̒l=%d,����2�̒l=%d\n", x, y);
	temp = gb;
	gb = ga;
	ga = temp;
	printf("swap�֐����ł̕ϐ�ga�̒l=%d,�ϐ�gb�̒l=%d\n", ga, gb);
}
int main(void) {
	int a, b;
	printf("��̐�������͂��Ă�������\n");
	printf("����1:");
	scanf("%d", &ga);
	printf("����2:");
	scanf("%d", &gb);
	a = ga;
	b = gb;
	swap(ga, gb);
	printf("main�֐����ł̐���1�̒l=%d,����2�̒l=%d\n", a, b);
	printf("main�֐����ł̕ϐ�ga�̒l=%d,�ϐ�gb�̒l=%d\n", ga, gb);
	return 0;
}

/*���s����
��̐�������͂��Ă�������
����1:85
����2:9
swap�֐����ł̐���1�̒l=9,����2�̒l=85
swap�֐����ł̕ϐ�ga�̒l=9,�ϐ�gb�̒l=85
main�֐����ł̐���1�̒l=85,����2�̒l=9
main�֐����ł̕ϐ�ga�̒l=9,�ϐ�gb�̒l=85

���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/