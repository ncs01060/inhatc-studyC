#include <stdio.h>


int main(void){
    int a;
    scanf("%d",&a);
    switch(a){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31");
            break;
        case 2:
            printf("28");
            break;
        default:
            printf("30");
    }
    return 0;
}

// 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 