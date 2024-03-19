#include <stdio.h>

int main(){
    int n = 0;
    int sumscore = 0;
    int pass = 0;
    int score;
    while (scanf("%d", &score) != EOF){
        sumscore += score;
        // pass += score >= 60 ? 1 : 0;
        if (score >= 60){
            pass += 1;
        }
        n += 1;
    }
    printf("%.2f\n%d", (double)sumscore / n, pass);
    return 0;
}