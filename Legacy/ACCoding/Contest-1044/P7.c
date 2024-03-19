#include <stdio.h>

int main(){
    int h;
    scanf("%d", &h);
    for (int i = 0; i < h; i ++){
        for (int j = 0; j < h - i - 1; j ++){
            printf(" ");
        }
        printf("/");
        for (int j = 0; j < 2 * i; j ++){
            printf(" ");
        }
        printf("\\");
        for (int j = 0; j < h - i - 1; j ++){
            printf(" ");
        }
        printf("\n");
    }
    for (int i = 0; i < 2 * h; i ++){
        printf("-");
    }
    printf("\n");
    int blank = h / 4;
    for(int i = 0; i < h; i ++){
        for (int j = 0; j < (h - 2) / 2; j ++){
            printf(" ");
        }
        printf("|");
        if (i + 1 < blank || h - i < blank){
            for(int j = 0; j < h; j ++){
                printf(" ");
            }
        }
        else if (i + 1 == blank){
            for(int j = 0; j < h / 4; j ++){
                printf(" ");
            }
            for(int j = 0; j < h / 2; j ++){
                printf("_");
            }
            for(int j = 0; j < h / 4; j ++){
                printf(" ");
            }
        }
        else if (h - i == blank){
            for(int j = 0; j < h / 4 -1; j ++){
                printf(" ");
            }
            printf("|");
            for(int j = 0; j < h / 2; j ++){
                printf("_");
            }
            printf("|");
            for(int j = 0; j < h / 4 - 1; j ++){
                printf(" ");
            }
        }
        else {
            for(int j = 0; j < h / 4 - 1; j ++){
                printf(" ");
            }
            printf("|");
            if (i != h - 1){
                for(int j = 0; j < h / 2; j ++){
                    printf(" ");
                }
            }
            else{
                for(int j = 0; j < h / 2; j ++){
                    printf("_");
                }
            }
            printf("|");
            for(int j = 0; j < h / 4 - 1; j ++){
                printf(" ");
            }
        }
        printf("|");
        for (int j = 0; j < (h - 2) / 2; j ++){
            printf(" ");
        }
        printf("\n");
    }
    for (int i = 0; i < h / 2; i ++){
        printf(" ");
    }
    for (int i = 0; i < h; i ++){
        printf("-");
    }
    for (int i = 0; i < h / 2; i ++){
        printf(" ");
    }
    return 0;
}