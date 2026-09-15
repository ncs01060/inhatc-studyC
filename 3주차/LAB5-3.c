#include <stdio.h>

int main(void){
    int number;
    scanf("%d",&number);

    (number % 2 == 0) ?  printf("Even\n") :  printf("Odd\n");
    
    return 0;
}