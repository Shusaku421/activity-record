#include<stdio.h>
int main(void){
    int num =1;
    int *p_num;
    /*numのアドレスを代入*/
    p_num = &num;
    printf("numの値 = %d\n", num);
    printf("p_num(アドレス値) = %p\n", p_num);
}