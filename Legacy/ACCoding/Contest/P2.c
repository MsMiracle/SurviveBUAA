#include <stdio.h>

int main(){
    double x1,x2,y1,y2;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("%.2f", (double)(x2 - x1) * (y2 - y1));
    return 0;
}