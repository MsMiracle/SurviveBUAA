#include <stdio.h>
unsigned long long C(int a, int b){
    unsigned long long product = 1;
    int END = b - a + 1;
    while (b >= END){
        product *= b;
        b -= 1;
    }
    for (int i = 1; i <= a; i ++){
        product /= i;
    }
    return product;
}

int main(){
    int a,b,c,L;
    while(scanf("%d %d %d %d", &a, &b, &c, &L) != EOF){
        int aMax = (int)(L / a);
        int bMax = (int)(L / b);
        int cMax = (int)(L / c);
        unsigned long long sum = 0;
        for(int i = 0; i <= aMax; i ++){
            for (int j = 0; j <= bMax; j ++){
                for (int k = 0; k <= cMax; k++){
                    if (a * i + b * j + c * k == L){
                        sum += C(i,i + j + k) * C(j,j + k);
                        // printf("%d个%d,%d个%d,%d个%d\n",i,a,j,b,k,c);
                    }
                }
            }
        }
        printf("%llu\n",sum);
    }
    return 0;
}