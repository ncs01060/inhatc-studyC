#include <stdio.h>

struct Student
{
    char name[50];
    int score;
};


int main(void){
    FILE* file;
    FILE* passFile;
    FILE* failFile;
    int studentCount;
    
    struct Student s;
    scanf("%d",&studentCount);

    file = fopen("student.txt","w");

    if(file == NULL){
        printf("파일 열기 실패\n");
        return 1;
    }

    for(int i = 0; i<studentCount; i++){
        scanf("%49s %d",s.name,&s.score);
        fprintf(file,"%s %d\n",s.name,s.score);

    };

    fclose(file);

    file = fopen("student.txt","r");
    passFile = fopen("pass.txt","w");
    failFile = fopen("fail.txt","w");

    if(file == NULL || passFile == NULL || failFile == NULL){
        printf("파일 열기 실패\n");
        if(file != NULL) fclose(file);
        if(passFile != NULL) fclose(passFile);
        if(failFile != NULL) fclose(failFile);
        return 1;

    }
    while(fscanf(file,"%s %d",s.name,&s.score) == 2){
        if(s.score >= 80){
            fprintf(passFile,"%s\n",s.name);
        } else {
            fprintf(failFile,"%s\n",s.name);
        }

    }
    

    fclose(file);
    fclose(passFile);
    fclose(failFile);

    printf("파일 저장 및 분류 완료!");

    return 0;
}