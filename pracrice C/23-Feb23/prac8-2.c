#include<Stdio.h>
int main(void){

    char str[]= "hello world";
    printf("%s\n", str);

    *str -= ('a' - 'A');
    *(str + 6) -= ('a' - 'A');
    printf("%s\n", str);

    return 0;
}