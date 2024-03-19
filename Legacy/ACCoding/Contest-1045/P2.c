#include <stdio.h>

int main(){
    unsigned int k;
    scanf("%u", &k);
    int power = 1;
    while(k){
        if (k % 2 != 0){
            printf("%u ", power);
        }
        k /= 2;
        power <<= 1;
    }
    return 0;
}