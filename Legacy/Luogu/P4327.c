#include <stdio.h>
int appendR2(char *arr){
    int length = 0;
    while(1){
        if (arr[length] != '\0'){length += 1;}
        else{break;}
    }
    arr[length] = '.';
    arr[length + 1] = '#';
    arr[length + 2] = '.';
    arr[length + 3] = '#';
    return 0;
}
int appendR1(char *arr){
    int length = 0;
    while(1){
        if (arr[length] != '\0'){length += 1;}
        else{break;}
    }
    arr[length] = '.';
    arr[length + 1] = '.';
    arr[length + 2] = '#';
    arr[length + 3] = '.';
    return 0;
}
int appendR3(char *arr, char *chArr, int index){
    int length = 0;
    while(1){
        if (arr[length] != '\0'){length += 1;}
        else{break;}
    }
    arr[length] = '#';
    arr[length + 1] = '.';
    arr[length + 2] = chArr[index];
    arr[length + 3] = '.';
    return 0;
}
int suffix(char *arr){
    int length = 0;
    while(1){
        if (arr[length] != '\0'){length += 1;}
        else{break;}
    }
    arr[length] = '.';
    return 0;
}
int suffixR3(char *arr){
    int length = 0;
    while(1){
        if (arr[length] != '\0'){length += 1;}
        else{break;}
    }
    arr[length] = '#';
    return 0;
}
int main(){
    char str[20] = {'\0'};
    char ch;
    scanf("%c", &ch);
    int chIndex = 0;
    while (ch != 0x0A){
        str[chIndex] = ch;
        chIndex += 1;
        scanf("%c", &ch);
    }
    char row1[100] = {"\0"};
    char row2[100] = {"\0"};
    char row3[100] = {"\0"};
    for (int i = 0; i < chIndex; i ++){
        appendR1(&row1[0]);
        appendR2(&row2[0]);
        appendR3(&row3[0], &str[0], i);
    }
    suffix(&row1[0]);
    suffix(&row2[0]);
    suffixR3(&row3[0]);
    for(int i = 2; i < chIndex; i += 3){
        int thisIndex = (i + 1) / 3;
        int r1Modifier = 12 * thisIndex - 2;
        int r2Modifier = 12 * thisIndex;
        int r3Modifier = 12 * thisIndex - 4;
        row1[r1Modifier] = '*';
        row2[r2Modifier - 1] = '*';
        row2[r2Modifier - 3] = '*';
        row3[r3Modifier] = '*';
        row3[r3Modifier + 4] = '*';
    }
    printf("%s\n",row1);
    printf("%s\n",row2);
    printf("%s\n",row3);
    printf("%s\n",row2);
    printf("%s\n",row1);
    return 0;
}