/*2020/12/11 0312020041 ��������*/
/*�K�{�ۑ�c11-1*/
#include<stdio.h>
#define NAME_LEN 64
struct student {
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;
};

int main(void) {
	struct student takao = { "Takao",173,86.2 };
	printf("���@��=%p\n", &takao.name);
	printf("�g�@��=%p\n", &takao.height);
	printf("�́@�d=%p\n", &takao.weight);
	printf("���w��=%p\n", &takao.schols);
	return 0;
}

/*���s����
���@��=0117F718
�g�@��=0117F758
�́@�d=0117F75C
���w��=0117F760

���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/