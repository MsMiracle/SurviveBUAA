#include <stdio.h>

int main(){
    char ch;
    int sum = 0;
    char arr[12];
    for (int i = 0; i < 12; i ++){
        scanf("%c", &ch);
        arr[i] = ch;
        ch -= 48;
        sum += (i % 2) == 0 ? ch : ch * 3;
    }
    sum %= 10;
    ch = sum == 0 ? 0 : (10 - sum);
    for (int i = 0; i < 12; i ++){
        printf("%c", arr[i]);
    }
    printf("%c", ch + 48);
    return 0;
}