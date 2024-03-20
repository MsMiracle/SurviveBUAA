#include <stdio.h>

int main(){
    int a, b, min, max;
    scanf("%d %d", &a, &b);
    if (a < b){min = a;}
    else {min = b;}
    for(int i = 1; i <= min; i ++){
        if (a % i == 0 && b % i == 0){
            max = i;
        }
    }
    printf("%d", max);
    return 0;
}