#include <stdio.h>

int Cat(int n){
    if (n == 0){
        return 1;
    }
    int sum = 0;
    for (int i = 0; i < n; i ++){
        sum += Cat(i) * Cat(n - 1 - i);
    }
    return sum;
}

int main(){
    int t;
    scanf("%d", &t);
    int n = 0;
    for (int i = 1; i <= t; i ++){
        scanf("%d",&n);
        printf("%d\n", Cat(n));
    }
    return 0;
}