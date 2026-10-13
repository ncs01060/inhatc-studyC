#include <stdio.h>

#define MAX_STUDENT 50

int main(void){

    int student_num;
    scanf("%d",&student_num);
    
    if(student_num > MAX_STUDENT){
        printf("입력 가능한 학생 범위 수를 넘었습니다.\n");
        return 0;
    }

    int student[MAX_STUDENT];
    int *p = student;

    for(int i = 0; i<student_num; i++){
        scanf("%d", (p+i));
    }

    for(int i = 0; i<student_num; i++){
        for(int j = i + 1; j<student_num; j++){
            if(student[i] > student[j]){
                int temp = student[i];
                student[i] = student[j];
                student[j] = temp;
            }

        }
    }

    printf("%d",student[0]);
    printf("%d\n",student[student_num-1]);




    return 0;

}