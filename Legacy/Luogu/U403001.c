#include <stdio.h>
#include <string.h>
void hanoi(int n, char start, char inter, char end){
    if (n == 1){
        printf("1 %c->%c\n", start, end);
    }
    else{
        hanoi(n - 1, start, end, inter);
        printf("%d %c->%c\n", n, start, end);
        hanoi(n - 1, inter, start, end);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    hanoi(n,'A','B','C');
    return 0;
}