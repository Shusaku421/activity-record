/*2020/12/29 0312020041��������*/
/*���R�ۑ�f10-2*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[]) {
	int i,x;
	char cat[128] = {'\0'};
	printf("���s���̈���:");
	for (i = 1; i < argc; i++) {
		printf("%s ",argv[i]);
	}
	x = atoi(argv[2]);
	for (i = 0; i < x; i++) {
		strcat(cat, argv[1]);
		x = atoi(argv[2]);
	}
	printf("\n%s��%d��A����������=%s",argv[1],x,cat);
	return 0;
}

/*���s����
���s���̈���:Yes 5
Yes��5��A����������=YesYesYesYesYes
���̃E�B���h�E�����ɂ́A�C�ӂ̃L�[�������Ă�������...
*/