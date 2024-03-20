#include <stdio.h>
#include <math.h>

double f1(int n){
    double sum = 0;
    int flag = 1;
    for (int i = 0; i < n; i ++){
        sum += (double)flag / (2 * i + 1);
        flag *= -1;
    }
    return 4 * sum;
}
double f2(int n){
    double sum = 0;
    for (int i = 0; i < n; i ++){
        sum += 1 / pow(2 * i + 1, 2);
    }
    return sqrt(8 * sum);
}
int main(){
    int t;
    scanf("%d", &t);
    getchar();
    int arr[10] = {0};
    int i = 1;
    int x;
    scanf("%d", &x);
    while(x != 0x0A){
        arr[i - 1] = x;
        i += 1;
        if (i <= t){
            scanf("%d", &x);
        }
        else{
            break;
        }
    }
    double errors[10] = {0};
    double p;
    for (int i = 0; i < t; i ++){
        p = f1(arr[i]) - f2(arr[i]);
        if (p < 0){p *= -1;}
        errors[i] = p;
    }
    for(int i = 0; i < t; i ++){
        printf("%.6f\n", errors[i]);
    }
}