#include <stdio.h>


int main(void){
    int nums[100] = {0};
    int length = 0;
    for(int i = 0; i<100; i++){
        scanf("%d",&nums[i]);
        if(nums[i] == 0){
            length = i - 1;
            break;
        }
    }
    
    for(int i = 0; i<length; i++){
        if((i+1) % 2 == 0){
            printf("%d ",nums[i]);
        }
    }

    return 0;
}