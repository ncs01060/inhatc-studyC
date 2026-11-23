#include <stdio.h>

int main(){
    struct Person{
        char name[100];
        char tel[100];
        char addr[100];
    };
    struct Person p;
    scanf("%99s %99s %99s", p.name, p.tel, p.addr);
    printf("name : %s\ntel : %s\naddr : %s", p.name, p.tel, p.addr);
    return 0;
}