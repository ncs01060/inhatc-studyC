#include <stdio.h>


int main(void){
    char words[10] = "";
    for(int i = 0; i<10; i++){
        scanf(" %c",&words[i]);
        printf("%c",words[i]);
    }
    return 0;
}