#include <stdio.h>

int Ack(int m, int n){
    if (m == 0){
        return n + 1;
    }
    if (n == 0 && m > 0){
        return Ack(m - 1, 1);
    }
    return Ack(m - 1, Ack(m, n - 1));
}
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%lld", Ack(a, b));
    return 0;
}