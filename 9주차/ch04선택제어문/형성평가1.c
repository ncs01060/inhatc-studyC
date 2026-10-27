#include <stdio.h>



int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    int max = a > b ? a : b;
    int min = a < b ? a : b;

    printf("%d",max - min);
    return 0;
}