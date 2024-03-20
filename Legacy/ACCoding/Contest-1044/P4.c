#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    getchar();
    char arr[300];
    int count = 0;
    char ch;
    while (scanf("%c", &ch) != EOF){
        arr[count] = ch;
        count += 1;
    }
    for (int i = 0; i < count; i ++){
        for (int j = 0; j < n; j ++){
            printf("%c", arr[i]);
        }
    }
    return 0;
}