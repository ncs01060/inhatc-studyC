#include <stdio.h>

int main(void){
    
    char isContinue;
    do{
        float w,h;
        scanf("%f %f",&w,&h);
        printf("Triangle area = %.1f\n",(w*h)/2);
        printf("Continue? ");
        scanf(" %c",&isContinue);

    } while (isContinue == 'Y' || isContinue == 'y');
    return 0;
}