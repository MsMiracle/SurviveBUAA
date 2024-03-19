#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m); //第k行存储在一个长度为m的数组中，其指针位于ptrArr[k - 1]
    getchar();
    char *ptrArr[2 * n];
    for(int i = 0; i < 2 * n; i ++){
        ptrArr[i] = 0x000000;
    }
    for(int i = 0; i < n; i ++){
        char *ptr = (char *)malloc(2 * m * sizeof(char));
        for(int j = 0; j < m; j ++){
            scanf("%c", &ptr[j]);
            ptr[m + j] = ptr[j];
        }
        getchar();
        ptrArr[i] = ptr;
        ptrArr[n + i] = ptr;
    }
    for (int i = 0; i < 2 * n; i ++){
        printf("%s\n", ptrArr[i]);
    }
    return 0;
}