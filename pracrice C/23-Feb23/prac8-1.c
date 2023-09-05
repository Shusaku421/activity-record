#include<stdio.h>
int main(void){

    int x;
    int *px;

    px=&x;
    *px=12;
    printf("%d", *px);
}