#include <stdio.h>

int main(){
    int n;
    int count = 0;
    int sum = 0;
    scanf("%d", &n);
    while(n != -1){
        sum += n;
        count += 1;
        scanf("%d", &n);
    }
    printf("%d/%d = %d", sum, count, sum/count);

}