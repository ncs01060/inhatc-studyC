#include <stdio.h>

int main(){
    struct Person{
        char name[20];
        int hei;
        double kg;
    };
    struct Person p[5];
    for(int i = 0; i < 5; i++){
        scanf("%19s %d %lf", p[i].name, &p[i].hei, &p[i].kg);
    }
    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 5; j++){
            if(p[i].hei > p[j].hei){
                struct Person tmp = p[i];
                p[i] = p[j];
                p[j] = tmp;
            }
        }
    }
    for(int i = 0; i < 5; i++){
        printf("%s %d %.1f\n",p[i].name, p[i].hei, p[i].kg);
    }
    return 0;
}