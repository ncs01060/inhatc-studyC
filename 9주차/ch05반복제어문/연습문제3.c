#include <stdio.h>


int main(void){
    int num;
    while(1){
        scanf("%d",&num);
        if(num < 0 || num > 100){
            break;
        }
        
        if(num >= 80){
            printf("Pass");
        } else {
            printf("Fail");
        }
        printf("\n");
    }
    return 0;
}