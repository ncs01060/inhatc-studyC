#include <stdio.h>


int main(void){
    int c = 1;
    int *p = &c;
    printf("%d\n",(*p)++);
    printf("%d\n",(*p)+1);
    printf("%d\n",*p+=1);
    printf("%d\n",(*p)+=1);
    *p = *p + 1;
    printf("%d\n",*p);
    printf("%d\n",++*p);
    printf("%d\n",++(*p));
    


    return 0;
}