#include <stdio.h>
unsigned long long rpow(long long n, long long p){ 
    if (p == 0){
        return 1;
    }
    else if (p == 1){
        return n;
    }
    else if (p == 2){
        return n * n;
    }
    if (p % 2 == 0){
        return rpow(rpow(n, p / 2), 2);
    }
    else {
        return n * rpow(n, p - 1);
    }
}
int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < rpow(2, m); i ++){
        int t = i ^ n;
        int sum = 0;
        while(t){
            if (t % 2 == 1){
                sum += 1;
            }
            t /= 2;
        }
        if (sum == m / 2){
            printf("%d\n", i);
        }
    }
    return 0;
}