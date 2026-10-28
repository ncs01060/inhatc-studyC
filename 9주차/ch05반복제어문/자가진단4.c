#include <stdio.h>


int main(void){
    int sum;
    int min = 0;
    int max = 0;
    while(1){
        scanf("%d",&sum);
        if(sum >= 100){
            max++;
            break;
        }
        if(sum < 50){
            min++;
        } else {
            max++;
        }

    }
    printf("small : %d\n",min);
    printf("large : %d\n",max);
    return 0;
}