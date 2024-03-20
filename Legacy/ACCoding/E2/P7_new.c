#include <stdio.h>
int inverse(int *arr, int n){
     if (arr[0] == 0){
        return 0;
    }
    for (int i = 1; i < n; i ++){
        arr[i] = (arr[i] == 0) ? 1 : 0;
    }
    arr[n] += 1;
    int tmp = n;
    while (arr[tmp] > 1 && tmp > 0){
        arr[tmp] -= 2;
        if (tmp >= 2){
            arr[tmp - 1] += 1;
        }
        tmp -= 1;
    }
    return 0;
}
int carry_bit(int *arr1, int *arr2, int n){
    if (n == 1){
        return ((arr1[0] + arr2[0]) % 2);
    }
    else if (arr1[0] + arr2[0] == 0){
        return 0;
    }
    else return ((arr1[0] + arr2[0] + carry_bit(arr1 + 1, arr2 + 1, n - 1)) % 2);
}
int main(){
    int t, n;
    scanf("%d %d", &t, &n);
    int num1[n], num2[n];
    for (int i = 0; i < t; i ++){
        char ch;
        getchar();
        for(int j = 0; j < n; j ++){
            scanf("%c", &ch);
            num1[j] = ch - '0';
        }
        getchar();
        for(int j = 0; j < n; j ++){
            scanf("%c", &ch);
            num2[j] = ch - '0';
        }
        getchar();
        if (num1[0] + num2[0] == 1) {
            printf("Not 0verFLOW\n");
        }
        if (num1[0] == 1){
            inverse(num1, n);
        }
        if (num2[0] == 1){
            inverse(num2, n);
        }
        int sum1 = 0;
        int sum2 = 0;
        for(int j = 1; j < n; j ++){
            sum1 += num1[j];
        }
        for(int j = 1; j < n; j ++){
            sum2 += num2[j];
        }
        if ((sum1 * sum2) == 0){
            printf("0verFLOW!");
            continue;
        }
        else if (carry_bit(num1 + 1, num2 + 1, n - 1) == 0){
            printf("Not 0verFLOW\n");
        }
        else {
            printf("0verFLOW!");
        }
    }
    return 0;
}