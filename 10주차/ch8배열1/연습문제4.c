#include <stdio.h>


int main(void){
    int Calender[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    int month;
    while(1){
        scanf("%d",&month);
        if(month == 0){
            break;
        }

        printf("%d\n",Calender[month-1]);
    }

    return 0;
}