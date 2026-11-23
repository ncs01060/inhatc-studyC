#include <stdio.h>
#include <string.h>

int main(){
    struct Person{
        char name[100];
        char tel[100];
        char addr[100];
    };
    struct Person p[3];
    for(int i = 0; i < 3; i++){
        scanf("%99s %99s %99s", p[i].name, p[i].tel, p[i].addr);
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2 - i; j++){
            if(strcmp(p[j].name , p[j + 1].name) > 0){
                struct Person tmp = p[j + 1];
                p[j + 1] = p[j];
                p[j] = tmp;
                
            }
        }
    }
    printf("name : %s\ntel : %s\naddr : %s\n", p[0].name, p[0].tel, p[0].addr);
    return 0;
}