#include <stdio.h>

int a[1000000+2] = {0};
int main(){
    int n;
    int res = 0;
    scanf("%d", &n);
    int t;
    for (int i = 0; i < n; i ++){
        scanf("%d", &t);
        a[t] |= 1;
    }
    for (int i = 0; i <= 1000000; i ++){
        res += a[i];
    }
    printf("%d", res);
    return 0;
}