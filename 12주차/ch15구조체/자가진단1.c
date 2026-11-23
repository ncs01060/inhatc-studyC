#include <stdio.h>

int main(){
    struct Person{
        char name[30];
        char sch[30];
        int age;
    };
    struct Person p;
    scanf("%29s", p.name);
    scanf("%29s", p.sch);
    scanf("%d", &p.age);
    printf("Name : %s\nSchool : %s\nGrade : %d", p.name, p.sch, p.age);
    return 0;
}