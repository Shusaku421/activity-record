/*2021/1/10 0312020041 ��������*/
/*���R�ۑ�f8-1*/
#include<stdio.h>
int main(void) {
	int i;
	char c;
	printf("�ŏ��̕��������:");
	scanf("%c", &c);
	for(i=0;i<5;i++){
		printf("%c=0x%x=%d\n", c + i, c + i, c + i);
	}
	return 0;
}

/*���s����
�ŏ��̕��������:m
m=0x6d=109
n=0x6e=110
o=0x6f=111
p=0x70=112
q=0x71=113

���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...

*/

/*
�ŏ��̕��������:8
8=0x38=56
9=0x39=57
:=0x3a=58
;=0x3b=59
<=0x3c=60

C:\Users\MrBlu\OneDrive\�f�X�N�g�b�v\���Ǝ���\1�N���\�\�t�g�E�F�A���KB�i���j�Q�j\20201120\Project1\Debug\Project3.exe (�v���Z�X 25816) �́A�R�[�h 0 �ŏI�����܂����B

*/