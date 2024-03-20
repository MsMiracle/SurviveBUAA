#include <stdio.h>

int main(){
    unsigned long long a, b;
    scanf("%llu %llu", &a, &b);
    printf("%llu + %llu = %llu", a, b, a + b);
    return 0;
}