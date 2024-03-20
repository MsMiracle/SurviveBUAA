#include <stdio.h>

int digit(int arg){
    int res = 0;
    int arg_t = arg;
    while(arg_t){
        arg_t /= 10;
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
int sdigit_dec(unsigned long long arg){
    int res = 0;
    int arg_t = arg;
    while(arg_t){
        res += arg_t % 10;
        arg_t /= 10;
    }
    return res;
}
int decide(int i, int j){
    if (j % 2 != 0){
        return 0;
    }
    if ((sdigit_dec(i) + sdigit_dec(j)) % 9 != 0){
        return 0;
    }
    if ((j + i * rpow(10, digit(j))) % 36 == 0){
        return 1;
    }
    else return 0;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    for(int i = 0; i < n; i ++){
        scanf("%d", &arr[i]);
    }
    unsigned long long res[1000000];
    // for(int i = 0; i < n; i ++){
    //     for(int j = i + 1; j < n; j ++){
    //         if (
    //             !((arr[j] % 100) % 4 != 0 && (arr[j] + rpow(10, digit(arr[j])) * (arr[i] % 10)) % 4 != 0) &&
    //             (sdigit_dec(arr[j]) + sdigit_dec(arr[i])) % 9 == 0
    //         ){
    //             res[sum] = arr[j] + arr[i] * rpow(10, digit(arr[j]));
    //             sum += 1;
    //         }
    //         if (
    //             !((arr[i] % 100) % 4 != 0 && (arr[i] + rpow(10, digit(arr[i])) * (arr[j] % 10)) % 4 != 0) &&
    //             (arr[i] + 10 * (arr[j] % 10)) % 4 == 0 &&
    //             (sdigit_dec(arr[i]) + sdigit_dec(arr[j])) % 9 == 0
    //         ){
    //             res[sum] = arr[i] + arr[j] * rpow(10, digit(arr[i]));
    //             sum += 1;
    //         }
    //     }
    // }
    for (int i = 0; i < n; i ++){
        for (int j = i + 1; j < n; j ++){
            if (decide(arr[i],arr[j]) == 1){
                res[sum] = (arr[j] + arr[i] * rpow(10, digit(arr[j])));
                sum += 1;
            }
            if (decide(arr[j],arr[i]) == 1){
                res[sum] = (arr[i] + arr[j] * rpow(10, digit(arr[i])));
                sum += 1;
            }
        }
    }
    printf("%d\n", sum);
    for(int i = 0; i < sum; i ++){
        printf("%llu ", res[i]);
    }
    return 0;
}