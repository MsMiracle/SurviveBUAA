#include <stdio.h>
int num1[80000], num2[80000];
int main(){
    int t, n;
    scanf("%d %d", &t, &n);
    getchar();
    for (int i = 0; i < t; i ++){
        int digits1 = 0;
        int digits2 = 0;
        char ch;
        scanf("%c", &ch);
        while (ch != 0x0A){
            num1[digits1] = ch - '0';
            digits1 += 1;
            scanf("%c", &ch);
        }
        scanf("%c", &ch);
        while (ch != 0x0A){
            num2[digits2] = ch - '0';
            digits2 += 1;
            scanf("%c", &ch);
        }
        int num1_upper, num2_upper;
        switch (num1[0] + num2[0]){
            case 0:
                for (int j = 1; j < n; j ++){
                    if (num1[j] == 1){
                        num1_upper = j;
                        break;
                    }
                }
                for (int j = 1; j < n; j ++){
                    if (num2[j] == 1){
                        num2_upper = j;
                        break;
                    }
                }
                int lower = num1_upper > num2_upper ? num2_upper : num1_upper;
                int upper = num1_upper < num2_upper ? num2_upper : num1_upper;
                if (upper >= 2){
                    printf("Not 0verFLOW\n");
                    continue;
                }
                while (num1[lower] + num2[lower] >= 2){
                    if (lower == 1){
                        printf("0verFLOW!\n");
                        break;
                    }
                    num1[lower - 1] += 1;
                    lower -= 1;
                }
                if (lower > 1){
                    printf("Not 0verFLOW\n");
                }
                break;
            case 1:
                printf("Not 0verFLOW\n");
            case 2:
                num1[0] = 0;
                num1[digits1 - 1] -= 1;
                for (int i = digits1 - 1; i > 1 && num1[i] < 0; i --){
                    num1[i] = 0;
                    num1[i - 1] -= 1;
                }
                for (int i = 1; i < digits1; i ++){
                    num1[i] = (num1[i] == 1) ? 0 : 1;
                }
                num2[0] = 0;
                num2[digits2 - 1] -= 1;
                for (int i = digits2 - 1; i > 1 && num2[i] < 0; i --){
                    num2[i] = 0;
                    num2[i - 1] -= 1;
                }
                for (int i = 1; i < digits2; i ++){
                    num2[i] = (num2[i] == 1) ? 0 : 1;
                }
                for (int j = 1; j < n; j ++){
                    if (num1[j] == 1){
                        num1_upper = j;
                        break;
                    }
                }
                for (int j = 1; j < n; j ++){
                    if (num2[j] == 1){
                        num2_upper = j;
                        break;
                    }
                }
                int nlower = num1_upper > num2_upper ? num2_upper : num1_upper;
                int nupper = num1_upper < num2_upper ? num2_upper : num1_upper;
                if (nupper >= 2){
                    printf("Not 0verFLOW\n");
                    continue;
                }
                while (num1[nlower] + num2[nlower] >= 2){
                    if (nlower == 1){
                        printf("0verFLOW!\n");
                        break;
                    }
                    num1[nlower - 1] += 1;
                    nlower -= 1;
                }
                if (nlower > 1){
                    printf("Not 0verFLOW\n");
                }
            default:
                break;
        }

    }
    return 0;
}