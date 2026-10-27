#include <stdio.h>


int main(void){
    int w,t;
    scanf("%d %d",&t,&w);
    
    int result = w + 100 - t;
    printf("%d\n",result);
    if(result > 0){
        printf("Obesity\nNeed control");
    }

    return 0;
}