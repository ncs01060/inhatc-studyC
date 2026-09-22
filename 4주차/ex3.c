#include <stdio.h>


void printNum(int n){
    if(n == 0){
        return;
    }
    printNum(n-1);
    printf("%d\n",n);

}

int main(void){

    int num;
    scanf("%d",&num);
    printNum(num);

    return 0;

}