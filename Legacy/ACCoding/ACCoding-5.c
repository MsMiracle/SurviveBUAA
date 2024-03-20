//https://accoding.buaa.edu.cn/problem/5/index
//难度4 完成：2024-1-22
#include <stdio.h>
int process(int arg){
    int t = 0;
    int count = 0;
    while(arg){
        int digit = arg % 10;
        arg /= 10;
        t += digit;
        count += 1;
    }
    return t;
}
int main(){
    char ch;
    int sum = 0;
    scanf("%c",&ch);
    while (ch != 0x0A){
        sum += ch - 48;
        scanf("%c",&ch);
    }
    while (sum >= 10){
        sum = process(sum);
    }
    printf("%d\n",sum);
    return 0;
}