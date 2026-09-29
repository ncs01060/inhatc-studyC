#include <stdio.h>

int main(void){
    int n;
    int arr[10] = {0};
    while(1){
        scanf("%d",&n);

        if(n == 0){
            break;
        }

        switch (n / 10)
        {
        case 10:
            arr[9] += 1;
            break;
        case 9:
            arr[8] += 1;
            break;
        case 8:
            arr[7] += 1;
            break;
        case 7:
            arr[6] += 1;
            break;
        case 6:
            arr[5] += 1;
            break;
        case 5:
            arr[4] += 1;
            break;
        case 4:
            arr[3] += 1;
            break;
        case 3:
            arr[2] += 1;
            break;
        case 2:
            arr[1] += 1;
            break;
        case 1:
            arr[0] += 1;
            break;
        
        default:
            break;
        }
    }
    for(int i = 10; i>=0; i--){
        if (arr[i] > 0){
             printf("%d : %d\n",(i+1)*10, arr[i]);
        }
       
    }
}