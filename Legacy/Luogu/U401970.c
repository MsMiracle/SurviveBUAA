#include <stdio.h>
#include <math.h>

int main(){
    unsigned int k;
    scanf("%u", &k);
    int arr[100] = {0};
    int i = 0;
    while(1){
        if(k % 2 == 0 && k >= 1){k = (int)(k / 2);}
        else if (k % 2 != 0 && k >= 1){arr[i] = 1;k /= 2;}
        else {break;}
        i += 1;
    }
    int n = 0;
    while(n <= i){
        if (arr[n] == 1){
            printf("%.f ",pow(2,n));
        }
        n += 1;
    }
    return 0;
}