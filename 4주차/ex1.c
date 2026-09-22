#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){
    int answer;
    int num;
    int count = 0;
    srand(time(NULL));

    answer = rand() % 100 + 1;
    printf("1 ~ 100 사이에 숫자를 맞춰보세요.\n");

    while (1)
    {
        printf("숫자 입력 : ");
        scanf("%d",&num);
        count++;
        if(num == answer){
            printf("정답입니다!! %d번 만에 맞추셨습니다!\n",count);
            break;
        } else if (num > answer){
            printf("더 작은 수 입니다! 다시 시도해보세요!\n");
        } else if (num < answer){
            printf("더 큰 수 입니다! 다시 시도해보세요!\n");
        }
    }
    



    return 0;
}
