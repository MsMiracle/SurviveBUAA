#include <stdio.h>
#include <stdlib.h>
int cmp(char *pA, char *pB, int lenpA){ //以元素个数记lenpA
    for(int i = 0; i < lenpA; i ++){
        if (*(pA + i) != *(pB + i)){return -1;}
    }
    return 0;
}
int main(){
    int t;
    scanf("%d", &t);
    getchar();
    int n,m;
    int res[t];
    for(int i = 0; i < t; i ++){
        scanf("%d %d", &n, &m);
        getchar();
        char *pA = (char *)malloc(n * sizeof(char));
        char *pB = (char *)malloc(m * sizeof(char));
        for(int j = 0; j < n; j ++){
            scanf("%c", &pA[j]);
            if (pA[j] >= 65 && pA[j] <= 90){
                pA[j] += 32;
            }
        }
        getchar();
        for(int j = 0; j < m; j ++){
            scanf("%c", &pB[j]);
            if (pB[j] >= 65 && pB[j] <= 90){
                pB[j] += 32;
            }
        }
        getchar();
        int count = 0;
        for(int i = 0; i < m - n + 1; i ++){
            if(cmp(pA, pB + i, n) == 0){count += 1;};
        }
        res[i] = count;
    }
    for(int i = 0; i < t; i ++){
        printf("%d\n", res[i]);
    }
    return 0;
}