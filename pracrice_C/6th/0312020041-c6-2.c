#include<stdio.h>
int ga, gb;
void swap(void) {
	int i;
	i = ga;
	ga = gb;
	gb = i;
}

int main(void) {
	printf("��̐�������͂��Ă��������B\n");
	printf("����1:");
	scanf("%d", &ga);
	printf("����2:");
	scanf("%d", &gb);
	swap();
	printf("������̐���1�̒l=%2d,����2�̒l=%2d\n", ga,gb);
	return 0;
}

/*���s����
��̐�������͂��Ă��������B
����1:85
����2:9
������̐���1�̒l= 9,����2�̒l=85

���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...
*/