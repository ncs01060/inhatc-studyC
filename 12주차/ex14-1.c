#include <stdio.h>

int main(void){
    FILE* filePtr;
    char fileName[] = "example.txt";

    filePtr = fopen(fileName,"w");

    if(filePtr == NULL){
        printf("파일을 열 수 없습니다: %s\n",fileName);
        return 1;
    }

    fprintf(filePtr, "Hello, world\n");
    fclose(filePtr);

    printf("%s파일에 데이터를 성공적으로 썼습니다.\n",fileName);

    return 0;
}