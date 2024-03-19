#include <stdio.h>

int main(){
    unsigned long long n;
    scanf("%llu", &n);
    int op, l, r;
    while (~scanf("%d %d %d", &op, &l, &r)){
        unsigned long long t = 0;
        switch (op)
        {
        case 1:
            for (int i = 0; i < r - l + 1; i ++){
                t |= (1 << i);
            }
            t <<= l;
            n = n & (~t);
            break;
        case 2:
            for (int i = 0; i < r - l + 1; i ++){
                t |= (1 << i);
            }
            t <<= l;
            n |= t;
            break;
        case 3:
            for (int i = 0; i < r - l + 1; i ++){
                t |= (1 << i);
            }
            t <<= l;
            n = (n & (~t)) | (~n << (64 - r - 1) >> (64 - r - 1) >> l << l);
        default:
            break;
        }
    }
    printf("%llu", n);
    return 0;
}