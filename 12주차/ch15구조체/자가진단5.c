#include <stdio.h>
#include <string.h>

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
            if(strcmp(p[i].name, p[j].name) > 0){
                struct Person tmp = p[i];
                p[i] = p[j];
                p[j] = tmp;
            }
        }
    }
    for(int i = 0; i < 5; i++){
        if(p[i].kg == (int)p[i].kg){
            printf("%s %d %d\n", p[i].name, p[i].hei, (int)p[i].kg);
        }else{
            printf("%s %d %.1f\n", p[i].name, p[i].hei, p[i].kg);
        }
    }
    return 0;
}