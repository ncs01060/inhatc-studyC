#include <stdio.h>

int main(){
    struct Person{
        char name[30];
        int score;
    };
    int max = 0;
    struct Person p[5];
    for(int i = 0; i < 5; i++){
        scanf("%29s %d", p[i].name, &p[i].score);
        if(p[i].score > p[max].score){
            max = i;
        }
    }
    printf("%s %d", p[max].name, p[max].score);
    return 0;
}