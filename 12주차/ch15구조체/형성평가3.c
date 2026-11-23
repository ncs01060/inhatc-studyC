#include <stdio.h>

int main(){
    struct Point{
        int x1, x2;
        int y1, y2;
    };
    struct Point p1, p2, res;
    scanf("%d %d %d %d", &p1.x1, &p1.y1, &p1.x2, &p1.y2);
    scanf("%d %d %d %d", &p2.x1, &p2.y1, &p2.x2, &p2.y2);
    res.x1 = (p1.x1 < p2.x1) ? p1.x1 : p2.x1;
    res.y1 = (p1.y1 < p2.y1) ? p1.y1 : p2.y1;
    res.x2 = (p1.x2 > p2.x2) ? p1.x2 : p2.x2;
    res.y2 = (p1.y2 > p2.y2) ? p1.y2 : p2.y2;
    printf("%d %d %d %d", res.x1, res.y1, res.x2, res.y2);
    return 0;
}