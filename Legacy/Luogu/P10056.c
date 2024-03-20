#include <stdio.h>

int main(){
    long long a, b, n;
    scanf("%lld %lld %lld", &a, &b, &n);
    if (n * b <= a){printf("%lld" ,n * b);}
    else{printf("%lld", a - (a % b));}
    return 0;
}