#include <stdio.h>


void min(int length, int arr[], int* result){
    for(int i = 0; i<length; i++){
        if(arr[i] < *result){
            *result = arr[i];
        }
    }
}

int main(void){
    int nums[10] = {0};
    int result = 1001;
    for(int i = 0; i<10; i++){
        scanf("%d",&nums[i]);
    }
    min(10,nums,&result);
    printf("%d",result);
    return 0;
}