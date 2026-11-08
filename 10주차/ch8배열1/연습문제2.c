#include <stdio.h>

int main(void){
    char words[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for(int i = 25; i>=0; i--){
        printf("%c",words[i]);
        printf(" ");
    }

    return 0;
}