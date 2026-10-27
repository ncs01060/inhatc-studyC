#include <stdio.h>


int main(void){
    int cmd;
    scanf("%d",&cmd);
    printf("1. ADD\n2. EDIT\n3. DEL\n");
    
    if(cmd == 1){
        printf("You selected ");
        printf("ADD.");
    } else if(cmd == 2){
        printf("You selected ");
        printf("EDIT.");
    } else if(cmd == 3){
        printf("You selected ");
        printf("DEL.");
    } else {
        printf("Wrong choice.");
    }
    return 0;
}