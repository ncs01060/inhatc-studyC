#include <stdio.h>

int min(int arr[], int length){
    int result = arr[0];
    for(int i = 0; i<length; i++){
        if(result > arr[i]){
            result = arr[i];
        }
    }

    return result;

}


int max(int arr[], int length){
    int result = arr[0];
    for(int i = 0; i<length; i++){
        if(result < arr[i]){
            result = arr[i];
        }
    }
    return result;
}

int main(void){
    int nums[10] = {0};
    int min_result, max_result;
    for(int i = 0; i<10; i++){
        scanf("%d",&nums[i]);
    }
    min_result = min(nums,10);
    max_result = max(nums,10);

    printf("%d %d",max_result, min_result);

    return 0;
}