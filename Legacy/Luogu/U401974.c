#include <stdio.h>

int main(){
    int factors[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    int check[11] = {1,0,10,9,8,7,6,5,4,3,2};
    int arr[18] = {0};
    int res[100] = {0};
    char x;
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 1; i <= n; i ++){
        scanf("%c", &x);
        int j = 0;
        while(x != 0x0A){
            arr[j] = x - 48;
            j += 1;
            scanf("%c", &x);
        }
        if (arr[17] == 40 || arr[17] == 72){arr[17] = 10;}
        int sum = 0;
        for (int j = 0; j < 17; j ++){
            sum += factors[j] * arr[j];
        }
        sum = sum % 11;
        if (arr[17] == check[sum]){res[i - 1] = 1;}
        else{res[i - 1] = 0;}
    }
    for (int i = 0; i < n; i ++){
        if(res[i] == 0){printf("NO\n");}
        else{printf("YES\n");}
    }
    return 0;
}