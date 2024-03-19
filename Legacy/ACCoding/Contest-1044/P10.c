#include <stdio.h>
int gcd(int arg1, int arg2){
    int a = arg1;
    int b = arg2;
    if(a < b) {
        int c;
        c = a;
        a = b;
        b = c;
    }//保证a>b
    while(a % b != 0) {
        int c = a%b;
        a = b;
        b = c;
    }
    return b;
}
int gcd_arr(int *arr, int n){
    if(n == 1){
        return arr[0];
    }
    if(n == 2){
        return gcd(arr[0], arr[1]);
    }
    else return gcd(arr[0], gcd_arr(arr + 1, n - 1));
}
int append_regional(int *arr, int max){
    *arr = *arr == max ? 0 : *arr + 1;
    if (*arr == 0){
        return -1;
    }
    return 0;
}
void append(int *arr, int max, int n){
    int t = n - 1;
    while (append_regional(arr + t, max) == -1){
        t -= 1;
    }
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
    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i ++){
        int n, m, k;
        scanf("%d %d %d", &n, &m, &k);
        int methods[2][m]; //2行m列
        for (int j = 0; j < m; j ++){
            scanf("%d %d" ,&methods[0][j], &methods[1][j]);
        }
        /*
            如果不可能有整数解，直接返回NO
        */
        int flag = 0;
        for (int j = 0; j < 10 && flag == 0; j ++){
            if ((n - k + j * n) % gcd_arr(&methods[0][0], m) == 0){
                flag = 1;
            }
        }
        if (flag == 0){
            printf("NO\n");
            continue;
        }
        /*
            假设每个卡牌最多用7次
        */
        int solutions[m];
        int iter = 0;
        int min = 0;
        int sum = 0;
        int cost = 0;
        int costflag = 0;
        for (int j = 0; j < m; j ++){
            solutions[j] = 0;
        }
        while(iter != rpow(6,m)){
            append(&solutions[0], 6, m);
            for(int l = 0; l < m; l ++){
                sum += solutions[l] * methods[0][l];
            }
            if (sum % n == n - k){
                for(int k = 0; k < m; k ++){
                    cost += solutions[k] * methods[1][k];
                }
                if (cost < min || costflag == 0){
                    min = cost;
                    cost = 0;
                    costflag = 1;
                }
                else{
                    cost = 0;
                }
            }
            sum = 0;
            iter += 1;
        }
        printf("%d", min);
    }
    return 0;
}