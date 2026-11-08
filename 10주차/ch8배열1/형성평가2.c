#include <stdio.h>

int main(){
    int a[5];
    int b;
    int sum = 0;
    for(int i = 0; i < 5; i++){
        scanf("%d", &b);
        a[i] = b;
    }
    sum = a[0] + a[2] + a[4];
    printf("%d", sum);
    return 0;
}