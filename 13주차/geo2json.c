#include <stdio.h>

int main(void){
    float latitude;
    float longitude;
    char info[80];
    int started = 0;

    puts("[");

    while(scanf("%f,%f,%79[^\r\n]",&latitude,&longitude,info) == 3){
        printf("{\"latitude\":%f, \"longtitude\":%f, \"info\":\"%s\"}",latitude,longitude,info);
        if(started){
            printf(",\n");
        } else {
            started = 1;
        }
    }

    
    puts("]");


    return 0;
}