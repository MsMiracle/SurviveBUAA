#include <stdio.h>

int main(){
    unsigned int num, n, key;
    while(~scanf("%u %u %u", &num, &n, &key)){
        printf("%u\n", (num & ~(15 << n)) | (key << n));
    }
    return 0;
}