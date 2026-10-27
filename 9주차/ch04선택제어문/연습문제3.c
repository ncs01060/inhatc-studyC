#include <stdio.h>


int main(void){
    int a;
    scanf("%d",&a);
    if(a >= 80){
        printf("Passed.");
    } else {
        printf("Failed.");
    }
    return 0;
}