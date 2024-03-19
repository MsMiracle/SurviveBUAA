#include <stdio.h>

int main(){
    int n;
    while (~scanf("%d", &n)){
        int res[32] = {0};
        if (n < 0){
            res[0] = 1;
        }
        int count = 31;
        while (n){
            if (n % 2 == 0){
                res[count] = 0;
            }
            else {
                res[count] = 1;
            }
            n /= 2;
            count -= 1;
        }
        if (res[0] == 0){
            for (int i = 0; i < 32; i ++){
                printf("%d", res[i]);
            }
            printf("\n");
            for (int i = 0; i < 32; i ++){
                printf("%d", res[i]);
            }
            printf("\n");
            for (int i = 0; i < 32; i ++){
                    printf("%d", res[i]);
            }
            printf("\n");
            continue;
        }
        for (int i = 0; i < 32; i ++){
            printf("%d", res[i]);
        }
        printf("\n");
        printf("%d", res[0]);
        for (int i = 1; i < 32; i ++){
            printf("%d", res[i] == 0 ? 1 : 0);
        }
        for (int i = 1; i < 32; i ++){
            res[i] = (res[i] == 0 ? 1 : 0);
        }
        printf("\n");
        count = 31;
        res[count] += 1;
        while (res[count] == 2){
            res[count] -= 2;
            res[count - 1] += 1;
            count -= 1;
        }
        for (int i = 0; i < 32; i ++){
            printf("%d", res[i]);
        }
        printf("\n");
    }
    return 0;
}