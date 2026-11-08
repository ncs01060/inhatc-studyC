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
    int nums[100] = {0};
    int i = 0;
    int max_result, min_result;
    while(1){
        scanf("%d",&nums[i]);
        if(nums[i] == 0){
            break;
        }
        i++;
    }

    max_result = max(nums,i);
    min_result = min(nums,i);

    printf("%d", max_result - min_result);


    return 0;
}