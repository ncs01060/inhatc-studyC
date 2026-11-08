#include <stdio.h>


int main(void){
    float avg_num[] = {85.6,79.5,83.1,80.0,78.2,75.0};
    int a,b;
    scanf("%d %d",&a,&b);
    a--;
    b--;
    float result = avg_num[a] + avg_num[b];
    printf("%.1f",result);
    return 0;
}