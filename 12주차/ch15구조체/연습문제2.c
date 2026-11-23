#include <stdio.h>

int main(){
    struct Person{
        char name[30];
        int age;
    };
    struct Person p = {"Yejun", 12};
    printf("Your name: %s, age: %d\n", p.name, p.age);
    scanf("%29s", p.name);
    scanf("%d", &p.age);
    printf("Friend's name: %s, age: %d", p.name, p.age);

    return 0;
}