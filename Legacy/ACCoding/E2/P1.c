#include <stdio.h>

int main(){
    int a, b, c;
    while (~scanf("%d %d %d", &a, &b, &c)){
        if (
            (a + b) <= c ||
            (a + c) <= b ||
            (b + c) <= a ||
            ((a - b) >= 0 ? (a - b) : (b - a)) >= c ||
            ((a - c) >= 0 ? (a - c) : (c - a)) >= b ||
            ((b - c) >= 0 ? (b - c) : (c - b)) >= a||
            a <= 0 || b <= 0 || c <= 0
        ){
            printf("N0pe\n");
            continue;
        }
        printf("We11 done\n");
    }
    return 0;
}