#include <stdio.h>

int main(void){

    int powerConsumed, costPerW;

    printf("사용하신 전력량(kw)을 입력하세요: ");
    scanf("%d",&powerConsumed);
    printf("전력 요금(1kw당 비용)을 입력하세요: ");
    scanf("%d",&costPerW);

    long long totalCost = (long long)powerConsumed * costPerW;
    printf("전기 요금: %lld\n",totalCost);

    return 0;
}