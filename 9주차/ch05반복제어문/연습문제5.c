#include <stdio.h>



int main(void){
    int num;
    int max = 0;
    int min = 101;
    while(1){
        scanf("%d",&num);
        if(num == 0){
            break;
        } else if(num < 0 || num > 100){
            continue;
        }
        if(max < num){
            max = num;
        }
        
        if(min > num){
            min = num;
        }

    }
    printf("MAX = %d\n",max);
    printf("MIN = %d",min);
    return 0;
}