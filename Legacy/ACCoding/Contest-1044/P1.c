#include <stdio.h>

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d\n%d\n", a + b, c + d);
    if (a + b > c + d){
        printf("a+b>c+d");
    }
    else if (a + b < c + d){
        printf("a+b<c+d");
    }
    else{
        printf("a+b=c+d");
    }
    return 0;
}