#include <stdio.h>
#include <string.h>
#include <stdlib.h>
unsigned long long rpow(long long n, long long p){
    if (p == 0){
        return 1;
    }
    else if (p == 1){
        return n;
    }
    if (p % 2 == 0){
        return pow(rpow(n, p / 2), 2);
    }
    else {
        return n * rpow(n, p - 1);
    }
}
int main(){
    long long n, p, m;
    int b;
    scanf("%lld %d %lld %lld", &n, &b, &p, &m);
    int digits[100] = {0};
    int power = 0;
    while(n){
        digits[power] = n % b;
        n /= b;
        power += 1;
    }
    power -= 1;
    unsigned long long sum = 0;
    while(power >= 0){
        sum += digits[power] * rpow(b, power);
        power -= 1;
    }
    sum %= m;
    printf("%llu", sum);
    return 0;
}