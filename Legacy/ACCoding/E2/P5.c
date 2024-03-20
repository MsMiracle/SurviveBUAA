#include <stdio.h>
int main(){
    int n;
    while (~scanf("%d", &n)){
        int rdigit;
        int ldigit;
        int flag = 0;
        while (n >= 10){
            rdigit = n % 10;
            n /= 10;
            ldigit = n % 10;
            if (ldigit <= rdigit){
                flag = 1;
                break;
            }
        }
        if (flag == 1){
            printf("No\n");
            continue;
        }
        printf("Yes\n");
    }
}