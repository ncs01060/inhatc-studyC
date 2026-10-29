#include <stdio.h>


int main(void){
    int num;
    int idx = 0;
    while(1){
        scanf("%d",&num);
        if(num == 0){
            break;
        }
        if(num % 3 == 0 || num % 5 == 0){
            continue;
        } else {
            idx++;
        }
    }
    printf("%d",idx);
    return 0;
}