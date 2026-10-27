#include <stdio.h>



int main(void){
    float sum;
    scanf("%f",&sum);

    if(sum >= 4.0){
        printf("scholarship");
    } else if(sum >= 3.0){
        printf("next semester");
    } else if(sum >= 2.0){
        printf("seasonal semester");
    } else {
        printf("retake");
    }
}