#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    int n;
    for (int i = 0; i < t; i ++){
        scanf("%d", &n);
        if (n == 1){
            printf("3\n");
            continue;
        }
        int cnt = 0;
        int continueflag = 0;
        for (int i = 0; i <=30; i ++){
            if ((1<<i) == n){
                printf("%d\n", n + 1);
                continueflag = 1;
                break;
            }
        }
        if (continueflag == 1){
            continue;
        }
        while (1){
            if (n % 2 == 0){
                cnt += 1;
            }
            else{
                break;
            }
            n /= 2;
        }
        
        printf("%d\n", 1<<cnt);
    }
    return 0;
}