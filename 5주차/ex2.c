#include <stdio.h>

int main(void){
    int dice[6] = {0};
    int input[10];

    for(int i = 0; i<10; i++){
        scanf("%d", &input[i]);

    }

    for(int i = 0; i<(sizeof(input) / sizeof(input[0])); i++){
        dice[input[i]-1] += 1;
    }

    for(int i = 0; i<6; i++){
        printf("%d : %d\n",i+1,dice[i]);
    }

    return 0;
}