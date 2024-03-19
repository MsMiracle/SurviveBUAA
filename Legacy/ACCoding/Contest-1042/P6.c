#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if (b != 0){
        printf("%d div %d = %d", a, b, a / b);
    }
    else{
        printf("ERROR. The divisor is ZERO");
    }
    return 0;
}