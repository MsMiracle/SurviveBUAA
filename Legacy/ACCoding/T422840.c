#include <stdio.h>

int main(){
    char arr[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int count[26] = {0};
    char ch;
    while(scanf("%c",&ch) != EOF){
        if (ch >= 65 && ch <= 90){
            ch += 32;
        }
        if (ch >= 97 && ch <= 122){
            count[ch - 97] += 1;
        }
    }
    for(int i = 0; i < 26; i ++){
        if(count[i] != 0){
            printf("%c %d\n", arr[i] - 32, count[i]);
        }
    }
}