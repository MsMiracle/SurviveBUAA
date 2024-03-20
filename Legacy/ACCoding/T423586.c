#include <stdio.h>

int main(){
    int m, n;
    scanf("%d %d", &n, &m);
    int candy[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &candy[i]);
    }
    int sums[n - 1];
    for(int i = 0; i < n - 1; i ++){
        sums[i] = candy[i] + candy[i + 1];
    }
    int res = 0;
    for(int i = 0; i < n - 1; i ++){
        while (sums[i] > m){
            sums[i] -= 1;
            sums[i + 1] -= 1;
            candy[i + 1] -= 1;
            res += 1;
        }
    }
    printf("%d", res);
    return 0;
}