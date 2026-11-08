#include <stdio.h>


int main(void){
    int nums[10] = {0};
    int sum = 0;
    for(int i = 0; i<10; i++){
        scanf("%d",&nums[i]);
        sum += nums[i];
    }

    float avg = (float)sum / 10.0;
    printf("sum = %d\n",sum);
    printf("avg = %.1f",avg);


    return 0;
}