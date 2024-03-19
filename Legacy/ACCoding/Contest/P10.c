#include <stdio.h>

int digit(unsigned long long arg){
    int res = 0;
    while(arg){
        arg /= 10;
        res += 1;
    }
    return res;
}
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
    int n;
    scanf("%d", &n);
    int arr[100000] = {0};
    int digits[100000] = {0};
    unsigned long long t;
    for (int i = 0; i < n; i ++){
        scanf("%llu", &t);
        digits[i] = digit(t);
        arr[i] = t % 36;
    }
    int sum = 0;
    for(int i = 0; i < n; i ++){
        for(int j = i; j < n; j ++){
            if (i != j){
                if (((arr[i] * ((unsigned long long)rpow(10, digits[j])) % 36) + arr[j]) % 36 == 0){
                    sum += 1;
                }
                if (((arr[j] * ((unsigned long long)rpow(10, digits[i])) % 36) + arr[i]) % 36 == 0){
                    sum += 1;
                }
            }
        }
    }
    printf("%d", sum);
    return 0;
}