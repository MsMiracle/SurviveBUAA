#include <stdio.h>

int mark[20];
int res[20];
int k;
int dfs(int n){
    if (n == k){
        for (int i = 0; i < k; i ++){
            printf("%d", res[i]);
        }
        printf("\n");
        return 0;
    }
    else {
        for (int i = 0; i < k; i ++){
            if (mark[i] == 0){
                mark[i] = 1;
                res[n] = i + 1;
                dfs(n + 1);
                mark[i] = 0;
                res[n] = 0;
            }
            else {
                continue;
            }
        }
    }
    return 0;
}
int main(){
    scanf("%d", &k);
    dfs(0);
    return 0;
}