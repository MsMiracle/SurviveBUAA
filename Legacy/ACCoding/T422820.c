#include <stdio.h>

int main(){
    int radix;
    scanf("%d", &radix);
    int n;
    scanf("%d", &n);
    char res[100] = {0};
    int count = 0;
    while(n){
        res[count] = n % radix;
        n /= radix;
        count += 1;
    }
    count -= 1;
    while(count >= 0){
        printf("%d", res[count]);
        count -= 1;
    }
    return 0;
}