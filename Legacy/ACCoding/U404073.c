#include <stdio.h>

int main(){
    int n;
    int a, b;
    scanf("%d", &n);
    while(n){
        n -= 1;
        scanf("%d %d", &a, &b);
        int red_required;
        if (
            a == 1 ||
            a == 4
        ){red_required = 1;}
        else if (
            a == 2 ||
            a == 5 ||
            a == 8
        ){red_required = 2;}
        else if (
            a == 3 ||
            a == 6 ||
            a == 9 ||
            a == 12
        ){red_required = 3;}
        else{red_required = -1;}
        switch (red_required){
            case 1:
                if (
                    b > 3 && b <= 12
                ){printf("Yes\n");}
                else{printf("No\n");}
                break;
            case 2:
                if (
                    b >= 2 && b <= 6 && b != 4
                ){printf("Yes\n");}
                else{printf("No\n");}
                break;
            case 3:
                printf("No\n");
                break;
            default:
                printf("No\n");
                break;
        }
    }
    return 0;
}