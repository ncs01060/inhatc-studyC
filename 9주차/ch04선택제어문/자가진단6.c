#include <stdio.h>



int main(void){
    int a;
    scanf("%d",&a);
    if(a < 0){
        printf("Non positive");   
    } else if(a % 2 == 0){
        printf("Even Number");
    } else if(a % 2 == 1) {
        printf("Odd Number");
    }

    return 0;
}