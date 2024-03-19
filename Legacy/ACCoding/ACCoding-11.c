/*
https://accoding.buaa.edu.cn/problem/11/index
难度5/10 完成日期：2024-01-23
*/
#include <stdio.h>

int main(){
    int a,b;
    int count = 0;
    scanf("%d %d",&a,&b);
    while(!(a % b == 0 || b % a == 0)){
        if (a > b){
            int t = a % b;
            a = b;
            b = t;
        }
        else{
            int t = b % a;
            b = a;
            a = t;
        }
        count += 1;
    }
    if (count % 2 == 0){
        printf("Nova");
    }
    else{
        printf("Laowang");
    }
    return 0;
}