#include <stdio.h>


int main(void){
    int num;
    float avg = 0.0;
    int sum = 0;
    int idx = 0;
    while(1){
        scanf("%d",&num);
        if(num > 100 || num < 0){
            break;
        }

        sum += num;
        idx++;

    }
    avg = (float)sum / (float)idx;
    printf("sum : %d\navg : %.1f",sum,avg);
    return 0;
}