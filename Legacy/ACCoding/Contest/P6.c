#include <stdio.h>

int main(){
    char arr[10000];
    char ch;
    int n = 0;
    while (scanf("%c", &ch) != EOF){
        arr[n] = ch;
        n += 1;
    }
    for(int i = 0; i < n; i ++){
        if (arr[i] >= 66 && arr[i] <= 90){
            printf("%c", arr[i] - 1);
        }
        else{
            printf("%c", arr[i]);
        }
    }
    return 0;
}