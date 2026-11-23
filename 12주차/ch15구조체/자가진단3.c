#include <stdio.h>

int main(){
    struct Person{
        char name[20];
        int hei;
    };
    struct Person q[3];
    for(int i = 0; i < 3; i++){
        scanf("%19s %d", q[i].name, &q[i].hei);
    }
    for(int i = 0; i < 3; i++){
        printf("%s : %dcm\n", q[i].name, q[i].hei);
    }
    return 0;
}