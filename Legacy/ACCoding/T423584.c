#include <stdio.h>

int main(){
    char nbsi[9] = {'\0'};
    char ch;
    scanf("%c-%c%c%c-%c%c%c%c%c-%c",
    &nbsi[0],
    &nbsi[1],
    &nbsi[2],
    &nbsi[3],
    &nbsi[4],
    &nbsi[5],
    &nbsi[6],
    &nbsi[7],
    &nbsi[8],
    &ch
    );
    int res = 0;;
    for(int i = 0; i < 9; i ++){
        res += (i + 1) * (nbsi[i] - 48);
    }
    res %= 11;
    if (res < 10){res += 48;}
    else{res = 88;}
    if (ch == res){printf("Right\n");}
    else{printf("%c-%c%c%c-%c%c%c%c%c-%c",
    nbsi[0],
    nbsi[1],
    nbsi[2],
    nbsi[3],
    nbsi[4],
    nbsi[5],
    nbsi[6],
    nbsi[7],
    nbsi[8],
    res);}
    return 0;
}