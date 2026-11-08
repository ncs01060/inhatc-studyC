#include <stdio.h>


int max(int arr[], int length){
    int result = arr[0];
    for(int i = 0; i<length; i++){
        if(arr[i] > result){
            result = arr[i];
        }
    }

    return result;
}

int main(void){
    int n;
    scanf("%d",&n);
    int nums[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&nums[i]);
    }

    int max_result = max(nums,n);
    printf("%d",max_result);

    return 0;
}