#include <stdio.h>

int main(){
    int a, b;
    
    while (scanf("%d %d", &a, &b) != EOF){
        if (b == 0){
            printf("Cann0t be divided by 0\n");
            continue;
        }
        printf("%d\n", a/b);
    }
}