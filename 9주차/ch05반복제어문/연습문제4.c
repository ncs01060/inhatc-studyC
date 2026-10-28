#include <stdio.h>

int main(void){
    int a;
    int cnt = 0;
    int sum = 0;
    float avg = 0.0;
    while(1){
        scanf("%d",&a);
        if(a == 0){
            break;
        }
        cnt++;
        sum += a;
        
        

    }
    avg = (float)sum / cnt;
    printf("cnt = %d\n",cnt);
    printf("sum = %d\n",sum);
    printf("avg = %.2f",avg);
   
    return 0;
}