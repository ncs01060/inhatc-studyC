#include <stdio.h>

int main(void){

    int a;
    int b;
    int c;
    int arr[10] = {0};


    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    int total = a*b*c;

    while (total > 0){
        arr[total % 10] += 1;
        total /= 10;
    }
    

    for(int i = 0; i<10; i++){
        printf("%d : %d\n",i, arr[i]);
    }


    return 0;
}