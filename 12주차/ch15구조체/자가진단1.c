#include <stdio.h>

struct Person
{
    char name[21];
    char schoolName[21];
    int grade;
};


int main(void){
    struct Person p;
    scanf("%20s %20s %d",p.name, p.schoolName, &p.grade);
    printf("Name : %s\n",p.name);
    printf("School : %s\n",p.schoolName);
    printf("Grade : %d",p.grade);
    return 0;
}
