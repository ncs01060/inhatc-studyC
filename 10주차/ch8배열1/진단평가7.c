#include <stdio.h>


int main(void){
    int nums[10] = {0};
    int sum = 0;
    float avg = 0;
    int length = 0;

    for(int i = 0; i<10; i++){
        scanf("%d",&nums[i]);
    }

    for(int i = 0; i<10; i++){
        if((i+1) % 2 == 0){
            sum += nums[i];
        } else {
            avg += nums[i];
            length++;
        }
    }
    float avg_o = avg / length;
    printf("sum : %d\n", sum);
    printf("avg : %.1f", avg_o);

    return 0;
}