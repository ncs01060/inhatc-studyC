#include <stdio.h>

int main(void){
    int a;
    scanf("%d",&a);
    int result = a % 2 == 0 ? 1 : 0;
    if(result){
        printf("Even");
    } else {
        printf("Odd");
    }

    return 0;
}