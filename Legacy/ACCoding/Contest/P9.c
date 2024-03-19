#include <stdio.h>

int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int arr[m][n];
    for (int i = 0; i < m; i ++){
        for(int j = 0; j < n; j ++){
            arr[i][j] = 1;
        }
    }
    for (int i = 0; i < m; i ++){
        for(int j = 0; j < n; j ++){
            if (arr[i][j] != 0 && i + j != 0){
                for (int k = 2; ((k * i) < m) && ((k * j) < n); k ++){
                    arr[k * i][k * j] = 0;
                }
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < m; i ++){
        for(int j = 0; j < n; j ++){
            if (arr[i][j] == 1){
                sum += 1;
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}