#include <stdio.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int command, num;
    for (int i = 0; i < n; i ++){
        scanf("%d %d", &command, &num);
        k = command == 1 ? ((k * num) % 65536) : ((k + num) % 65536);
    }
    printf("%d", k);
}