/*ポインタ変数は前に*を付けて宣言　　　*/
/*アドレスを代入する　p = &x　　　　　*/
/*値を代入する　*p = x　　　　　　　　*/
/*アドレスが格納された変数の前に*を付けると【アドレス先の値】を取得する*/

#include<stdio.h>
int main(void){
    int num =1;
    int *p_num;

    //numアドレスを代入
    p_num = &num;
    printf("numのアドレス = %p, %p\n", &num, p_num);
    printf("numの値 = %d, %d\n", *(&num), *p_num);
}