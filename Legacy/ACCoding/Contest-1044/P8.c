#include <stdio.h>
#include <math.h>

int main(){
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i ++){
        int n = 0;
        int max[2] = {0};
        scanf("%d", &n);
        for(int j = 0; j < 300; j ++){
            for(int k = j; k < 300; k ++){
                if (pow((k + 1) * k / 2, 2) - pow((j + 1) * j / 2, 2) == n && k - j > max[1] - max[0]){
                    max[0] = j + 1;
                    max[1] = k;
                }
            }
        }
        if (max[1] == 0 || max[1] - max[0] == 0){
            printf("NO\n");
        }
        else{
            printf("%d %d\n", max[0], max[1]);
        }
    }
    return 0;
}