#include <stdio.h>

int main(void){
    int array[] = {7,4,10,3,5};
    int temp;
    int size = sizeof(array) / sizeof(array[0]);


    printf("정렬 전 순서\n");
    for(int i = 0; i< sizeof(array) / sizeof(array[0]); i++){
        printf("%d ",array[i]);

    }
    printf("\n");

    for(int i = 0; i<size; i++){ 
        int j = i-1; // i-1번 반복
        while ((array[j] > array[j+1])&&(j>=0)) // array[j] 가 array[j+1]보다 크거나 j가 0 이상이면 실행
        {
            temp = array[j]; // array[j]값을 temp 값에 저장
            array[j] = array[j+1]; // 전 값과 다음 값을 변경
            array[j+1] = temp; // array[j+1]값을 temp 값으로 변경
            j--;
        }
        
    }

    printf("정렬 후 순서\n");
    for(int i = 0; i< sizeof(array) / sizeof(array[0]); i++){
        printf("%d ",array[i]);

    }
    printf("\n");



    return 0;
}