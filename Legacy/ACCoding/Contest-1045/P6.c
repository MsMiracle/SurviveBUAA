#include <stdio.h>

int main(){
    char ch;
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90){
            ch += 'a' - 'A';
    }
    char t;
    int n = 0;
    int count = 1;
    while (~scanf("%c", &t)){
        if (t >= 'A' && t <= 'Z'){
            t += 'a' - 'A';
        }
        if (t > 'a' && t < 'z'){
            count += 1;
            if (t == ch){
                n += 1;
            }
        }
    }
    printf("%d\n%.2f%%", n, (double)100 * n / count);
    return 0;
}