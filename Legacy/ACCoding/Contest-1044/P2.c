#include <stdio.h>

int main(){
    int a, b, n;
    int sum = 0;
    scanf("%d %d %d", &a, &b, &n);
    for(int i = 0; i < n; i ++){
        sum += a + b * i;
    }
    printf("%d", sum);
    return 0;
}