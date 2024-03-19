#include <stdio.h>
#include <math.h>
double mabs(double arg){
    if (arg == 0){
        return 0;
    }
    return arg;
}
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double delta = pow(b, 2) - 4 * a * c;
    if (a == 0 && b == 0 && c == 0){
        printf("infinite solutions");
        return 0;
    }
    if (a == 0) {
        if (b != 0){
            printf("%.2f", mabs((double) -c / b));
        }
        else{
            printf("No real root");
        }
    }
    else if (delta < 0){
        printf("No real root");
    }
    else if (delta == 0){
        printf("%.2f", mabs((double)(-b / (2 * a))));
    }
    else {
        if (a > 0){
            printf("%.2f %.2f", mabs((double)((-b - sqrt(delta)) / (2 * a))), mabs((double)((-b + sqrt(delta)) / (2 * a))));
        }
        else{
            printf("%.2f %.2f", mabs((double)((-b + sqrt(delta)) / (2 * a))), mabs((double)((-b  sqrt(delta)) / (2 * a))));
        }
    }
}