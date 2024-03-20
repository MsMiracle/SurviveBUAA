#include <stdio.h>
#define eps 1e-9
int main(){
    int n;
    double t;
    scanf("%d %lf", &n, &t);
    getchar();
    char arr[n][21];
    double speed[n];
    for (int i = 0; i < n; i ++){
        char ch;
        double t;
        char *p = arr[i];
        scanf("%c", &ch);
        while (ch != ' '){
            *p = ch;
            p += 1;
            scanf("%c", &ch);
        }
        *p = '\0';
        scanf("%lf", &t);
        speed[i] = (double)10000 / t;
        getchar();
    }
    double tmp[n];
    int min_index = 0;
    for (int i = 0; i < n; i ++){
        tmp[i] = speed[i];
        if (tmp[i] < tmp[min_index]) {
            min_index = i;
        }
    }
    while ((t - tmp[min_index]) >= -eps){
        t -= tmp[min_index];
        for(int i = 0; i < n; i ++){
            if (i != min_index){
                tmp[i] -= tmp[min_index];
            }
        }
        tmp[min_index] = 0;
        for(int i = 0; arr[min_index][i] != '\0'; i ++){
            printf("%c", arr[min_index][i]);
        }
        printf(" ");
        tmp[min_index] = speed[min_index];
        for (int i = 0; i < n; i ++){
            if (tmp[i] < tmp[min_index]){
                min_index = i;
            }
        }
    }
    return 0;
}