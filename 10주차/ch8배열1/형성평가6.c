#include <stdio.h>

int main(){
    int a[100];
    int cnt = 0;
    int sum = 0;
    for(int i = 0; i < 100; i++){
        scanf("%d", &a[i]);
        if(a[i] == 0){
            break;
        }
        if(a[i] % 5 == 0){
            sum += a[i];
            cnt++;
        }
    }
    printf("Multiples of 5 : %d\nsum : %d\navg : %.1f", cnt, sum, (double)sum / cnt);
    return 0;
}