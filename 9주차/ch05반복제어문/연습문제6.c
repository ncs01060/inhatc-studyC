#include <stdio.h>


int main(void){
    int cmd;
    while(1){
        printf("1. Input\n2. Output\n3. Delete\n4. Finish\n");
        printf("Enter number: ");
        scanf("%d",&cmd);
        printf("\n");
        switch(cmd){
            case 1:
                printf("You selected Input.");
                break;
            case 2:
                printf("You selected Output.");
                break;
            case 3:
                printf("You selected Delete.");
                break;
            case 4:
                printf("You selected Finish.");
                break;
            default:
                printf("Wrong input.");
                break;
        }

        if(cmd == 4){
            break;
        }

        printf("\n\n");
    }
    return 0;
}