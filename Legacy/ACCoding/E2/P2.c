#include <stdio.h>
#include <math.h>

int main(){
    int t;
    scanf("%d", &t);
    int n;
    for (int i = 0; i < t; i ++){
        scanf("%d", &n);
        double res1 = 0;
        double res2 = 0;
        int flag1 = 1;
        for (int j = 0; j < n; j ++){
            res1 += ((double)flag1 / (2 * j + 1));
            flag1 *= -1;
        }
        for (int j = 0; j < n; j ++){
            res2 += 1 / pow(2 * j + 1, 2);
        }
        printf("%.6f\n", fabs(4 * res1 - sqrt(8 * res2)));
    }
    return 0;
}