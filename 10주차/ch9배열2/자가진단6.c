#include <stdio.h>




int main(){
    int a[5][5]={

    };
    for (int i=0; i<5;i++){
        for (int j=0;j<4;j++){
            scanf("%d",&a[i][j]);
            a[i][4] += a[i][j];
        }
    }

    for (int i=0; i<5;i++){
        printf("%d %.1f\n",a[i][4],a[i][4]/4.0);
    }

}