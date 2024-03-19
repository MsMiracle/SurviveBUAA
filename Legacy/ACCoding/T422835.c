#include <stdio.h>

int main(){
    unsigned long long input;
    unsigned long long l;
    unsigned long long r;
    int m, n;
    // int bytes = 0;
    scanf("%llu %d %d", &input, &m, &n);
    // for (int i = 7; i >= 0; i --){
    //     char *test = (char *)(p + i);
    //     if (*test != 0){bytes = i + 1;break;}
    // }
    r = (((input << (64 - m - 1)) << 1) >> (64 - m - 1)) >> 1;
    l = (((input >> n) >> 1) << n) << 1;
    l |= r;
    printf("%llu", l);
    return 0;
}