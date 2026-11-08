#include <stdio.h>

int main(){
    char a[10];
    char b = ' ';
    for(int i = 0; i < 10; i++){
        scanf(" %c", &b);
        a[i] = b;
    }
    for(int i = 9; i >= 0; i--){
        printf("%c ", a[i]);
    }
    return 0;
}