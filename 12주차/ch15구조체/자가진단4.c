#include <stdio.h>

int main(){
    struct Person{
        char name[30];
        int hei;
    };
    int min = 0;
    struct Person p[5];
    for(int i = 0; i < 5; i++){
        scanf("%29s %d", p[i].name, &p[i].hei);
        if(p[i].hei < p[min].hei){
            min = i;
        }
    }
    printf("%s %d", p[min].name, p[min].hei);
    return 0;
}