#include <stdio.h>

int main(void){
    int num;
    int sw = 0;
    while(1){
        printf("1. Korea\n2. USA\n3. Japan\n4. China\nnumber? ");
    scanf("%d",&num);
    printf("\n");
    switch(num){
        case 1:
            printf("Seoul\n");
            break;
        case 2:
            printf("Washington\n");
            break;
        case 3:
            printf("Tokyo\n");
            break;
        case 4:
            printf("Beijing\n");
            break;
        
        default:
            printf("none\n");
            sw = 1;
            break;
    }
    printf("\n");
    if(sw){
        break;
    }
    }
    

    return 0;
}