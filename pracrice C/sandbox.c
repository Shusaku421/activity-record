#include<stdio.h>

int bubbleSort(int a[], int n)
{
    int temp, flg=1, i=0, cnt=0;
    while(flg){
        flg = 0;
        for(int j=n-1 ; j>i ; j--){
            if(a[j] < a[j-1]){
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
                cnt++;
                flg = 1;
            }
        }

    }
    return cnt;
}

int main(void){

    int n, data[100], i, swap;
    scanf("%d", &n);
    for(i=0 ; i<n ; i++) scanf("%d", &data[i]);
    swap = bubbleSort(data, n);
    for(i=0 ; i<n ; i++){
        if(i != 0) printf(" ");
        printf("%d", data[i]);
    }
    printf("\n%d\n", swap);

}