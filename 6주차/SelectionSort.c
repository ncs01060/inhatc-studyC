#include <stdio.h>


int main(void){
    int array[] = {7,4,10,3,5};
    int temp;

    printf("정렬 전 순서\n");
    for(int i = 0; i< sizeof(array) / sizeof(array[0]); i++){
        printf("%d ",array[i]);

    }
    printf("\n");

    for(int i = 0; i< sizeof(array) / sizeof(array[0]); i++){
        for(int j = i + 1; j < sizeof(array) / sizeof(array[0]); j++){ // 선정 위치 + 1부터 마지막까지 비교
            if(array[i] > array[j]){ // array[j]를 탐색하면서 array[i]보다 작은지 확인
                temp = array[i]; // array[j]값을 temp 값에 저장
                array[i] = array[j];// 전 값과 다음 값을 변경
                array[j] = temp;// array[j+1]값을 temp 값으로 변경
            }
        }
    }
    printf("정렬 후 순서\n");
    for(int i = 0; i< sizeof(array) / sizeof(array[0]); i++){
        printf("%d ",array[i]);

    }
    printf("\n");
    return 0;
}