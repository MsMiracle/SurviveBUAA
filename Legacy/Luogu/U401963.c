#include <stdio.h>

int main(){
    double x1, x2, y1, y2;
    while(scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2) != EOF){
        if (x1 < x2 && y1 < y2){
            printf("%.2f\n", (x2 - x1) * (y2 - y1));
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}