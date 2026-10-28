#include <stdio.h>


int main(void){
    int a;
    int sum = 0;
    int num = 1;
    scanf("%d",&a);
    while(num <= a){
        sum += num;
        num++;
    }
    printf("%d",sum);

    return 0;
}