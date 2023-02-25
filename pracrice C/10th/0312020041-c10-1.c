/*2020/11/04 0312020041堅岡周作*/
/*必須課題c10-1*/
#include<stdio.h>
int main(void) {
	int array_int[5],*p_int=array_int,i;
	double array_double[5],*p_double=array_double;

	for (i = 0; i < 5; i++) {
		printf("P_int+%d=%p\n",i,p_int+i);
	}
	for (i = 0; i < 5; i++) {
		printf("P_double+%d=%p\n", i, p_double + i);
	}
	return 0;
}

/*実行結果
P_int+0=004FFE34
P_int+1=004FFE38
P_int+2=004FFE3C
P_int+3=004FFE40
P_int+4=004FFE44
P_double+0=004FFDEC
P_double+1=004FFDF4
P_double+2=004FFDFC
P_double+3=004FFE04
P_double+4=004FFE0C

このウィンドウを閉じるには、任意のキーを押してください...

*/