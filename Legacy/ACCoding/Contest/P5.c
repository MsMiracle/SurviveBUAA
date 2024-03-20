#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i ++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i ++){
        printf("%d\n", arr[i + 1] - arr[i]);
    }
    return 0;
}