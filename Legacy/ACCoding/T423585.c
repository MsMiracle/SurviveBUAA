#include <stdio.h>
void factorize(int n, int *arr){
    int count = 0;
    while(n != 1){
        for (int i = 2; i <= n; i ++){
            if(n % i == 0){
                arr[count] = i;
                count += 1;
                n /= i;
                break;
            }
        }
    }
}
int main(){
    int nums[20] = {0}; //用来存储所有的输入
    int pfactors[20][20] = {0};
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i ++){
        scanf("%d", &nums[i]);
    }
    for(int i = 0; i < n; i ++){
        factorize(nums[i],&pfactors[i][0]);
    }
    int res = 0;

    return 0;
}