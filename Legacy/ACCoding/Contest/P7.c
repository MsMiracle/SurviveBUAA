#include <stdio.h>

int main(){
    int budget, b;
    scanf("%d", &budget);
    scanf("%d", &b);
    int arr[100] = {0};
    int n = 0;
    while(scanf("%d", &arr[n]) != EOF){
        n += 1;
    }
    for (int i = 0; i < n; i++){
        budget -= arr[i];
    }
    if (budget >= b){
        printf("Yes\n%d", budget - b);
    }
    else{
        printf("N0\n%d", budget);
    }
    return 0;
}