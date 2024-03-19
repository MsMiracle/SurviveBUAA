#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d mod %d = %d", a, b, a % b);
    return 0;
}