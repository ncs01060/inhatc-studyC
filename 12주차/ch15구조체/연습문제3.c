#include <stdio.h>

int main(){
    struct Person{
        char name[20];
        int age;
    };
    struct Person q[3];
    for(int i = 0; i < 3; i++){
        scanf("%19s %d", q[i].name, &q[i].age);
    }
    for(int i = 0; i < 3; i++){
        printf("Name : %s\nAge : %d\n", q[i].name, q[i].age);
    }
    return 0;
}