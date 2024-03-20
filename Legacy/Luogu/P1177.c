#include <stdio.h>
#include <stdlib.h>
int cmp(const void *pA, const void *pB){
    return *(long long *)pA > *(long long *)pB?1:-1;
}
int main(){
    int n;
    scanf("%d", &n);
    long long arr[n];
    for (int i = 0; i < n; i ++){
        scanf("%lld", &arr[i]);
    }
    getchar();
    qsort(arr, n, sizeof(long long),cmp);
    for(int i = 0; i < n; i ++){
        printf("%lld ", arr[i]);
    }
}