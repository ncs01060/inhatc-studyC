#include <stdio.h>

int main(){
    int a[100];
    int max;
    int min;
    for(int i = 0; i < 100; i++){
        scanf("%d", &a[i]);
        if(a[i] == 0){
            break;
        }
        if(i == 0){
            max = a[i];
            min = a[i];
        }
        if(a[i] > max){
            max = a[i];
        }
        if(a[i] < min){
            min = a[i];
        }
    }
    printf("%d", max + min);
    return 0;
}