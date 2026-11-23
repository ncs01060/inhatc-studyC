#include <stdio.h>

struct Student
{
    char name[21];
    int score[3];
    int total;   // 총점
};


void input(struct Student *std, int num){
    for(int i = 0; i<num; i++){
        scanf("%20s",std[i].name);
        for(int j = 0; j<3; j++){
            scanf("%d",&std[i].score[j]);
            
        }
        std[i].total = std[i].score[0] + std[i].score[1] + std[i].score[2];
    }
}

void sort(struct Student *std, int num){
    struct Student temp;
    for(int i = 0; i<num-1; i++){
        int swapped = 0;
        for(int j = 0; j<num - i -1; j++){
            if (std[j].total > std[j+1].total){
                temp = std[j];
                std[j] = std[j+1];
                std[j+1] = temp;
                swapped = 1;
        }

        }
        if(!swapped){
            break;
        }
        
    }

}


void output(struct Student *std, int num)
{
    for(int i = num-1; i>=0; i--){
        printf("%s ",std[i].name);
        for(int j = 0; j<3; j++){
            printf("%d ",std[i].score[j]);
        }
        printf("%d\n",std[i].total);
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    
    struct Student arr[10];
    input(arr, n);
    sort(arr, n);
    output(arr, n);
    return 0;
}