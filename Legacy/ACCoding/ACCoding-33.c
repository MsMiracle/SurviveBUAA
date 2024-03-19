#include <stdio.h>
#include <string.h>
void wmem_double(void *dest, double value){
    double *ptr = (double *)dest;
    *ptr = value;
}
int swap(int *pA, int *pB){
    int t = *pA;
    memcpy(pA,pB,sizeof(int));
    memcpy(pB,&t,sizeof(int));
    return 0;
}
int dswap(double *pA, double *pB){
    double t = *pA;
    memcpy(pA,pB,sizeof(double));
    memcpy(pB,&t,sizeof(double));
    return 0;
}
int solve(int A, int B, int C, int D, int E, int F, double *pres){
    /*
    求解Ax + By + C = 0和Dx + Ey + F = 0的交点
    */
    if (A == 0 && D == 0 || B == 0 && E == 0 || A * E == B * D){
        return -1;
    }
    int sflag = 0;
    double resX,resY;
    if (A == 0){swap(&A,&D);swap(&B,&E);swap(&C,&F);sflag = 1;}
    resY = (double)(D * C - A * F) / (A * E - B * D);
    resX = (double)(-B * resY - C) / A;
    if(resY == 0){resY = 0;}
    if(resX == 0){resX = 0;}
    wmem_double(pres,resX);
    wmem_double(pres + 1,resY);
    pres += 2 ;
    if (sflag == 1){swap(&A,&D);swap(&B,&E);swap(&C,&F);}
    return 0;
}
int main(){
    int a[3][3]; //该数组每一行表示一条直线的三个参数
    double res[3][2]; //该数组收集所有的解
    double *pres = &res[0][0];
    int resCount = 0;
    for (int i = 1; i <= 3; i++){
        for (int j = 1; j <= 3; j++){
            scanf("%d", &a[i - 1][j - 1]);
        }
    }
    /*
    接下来的逻辑：先求解两条直线的交点，再判断这个交点是否在第三条直线上，如果不在则继续；
    如果在则返回只有一解；如果两条直线平行则返回NULL；
    */
    for (int i = 1; i <= 3; i++){
        int j;
        if (i != 3){j = i + 1;}
        else{j = 1;}
        if (solve(a[i - 1][0],a[i - 1][1],a[i - 1][2],a[j - 1][0],a[j - 1][1],a[j - 1][2],&res[resCount][0]) != -1){resCount += 1;}
        if ((double)a[2][0] * res[0][0] + (double)a[2][1] * res[0][1] + a[2][2] <= 0.01 && (double)a[2][0] * res[0][0] + (double)a[2][1] * res[0][1] + a[2][2] >= -0.01){
            break;
        }
    }
    printf("这个方程一共有%d个解\n",resCount);
    if (resCount == 0){return 0;}
    for (int i = 1; i < resCount; i++){
        if (i == 3){break;}
        for(int j = 0; j < resCount - i; j ++){
            if(res[i + j - 1][0] < res[i][0] || res[i + j - 1][0] == res[i][0] && res[i + j - 1][1] < res[i][1]){
                dswap(&res[i][0],&res[i + j - 1][0]);
                dswap(&res[i][1],&res[i + j - 1][1]);
            }
        }
    }
    for (int i = 1; i <= resCount; i++){
        printf("%.2f %.2f\n", res[i - 1][0],res[i - 1][1]);
    }
    return 0;
}