#include <stdio.h>

int fib(int n){
    if (n == 1){
        return 2;
    }
    if (n == 2){
        return 3;
    }
    return (fib(n - 1) + fib(n - 2));
}
int main(){
    int n;
    scanf("%d", &n);
    while(n != 0){
        printf("%d\n", fib(n));
        scanf("%d", &n);
    }
    return 0;
}