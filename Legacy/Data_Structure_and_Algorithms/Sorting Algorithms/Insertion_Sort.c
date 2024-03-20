#include <stdio.h>

int main(){
    int n; //元素个数
    scanf("%d", &n);
    int res[n];
    for (int i = 0; i < n; i ++){
        scanf("%d", &res[i]);
    }
    for (int i = 1; i < n; i ++){
        for (int j = i - 1; j > 0; j --){
            if (res[i] < res[j]){
                res[i] ^= res[j];
                res[j] ^= res[i];
                res[i] ^= res[j];
            }
        }
    }
}