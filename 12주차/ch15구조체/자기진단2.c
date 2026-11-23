#include <stdio.h>

int main(){
    struct Person{
        char sch[30];
        int gra;
    };
    struct Person p = {"Jejuelementary", 6};
    printf("%d grade in %s School\n", p.gra, p.sch);
    struct Person q;
    scanf("%29s %d", q.sch, &q.gra);
    printf("%d grade in %s School\n", q.gra, q.sch);
    return 0;
}