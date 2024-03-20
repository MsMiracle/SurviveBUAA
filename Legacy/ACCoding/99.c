#include <stdio.h>
void process(int *arr){
    if (arr[0] > arr[1]){
        arr[0] -= 2;
        arr[1] -= 1;
    }
    else{
        arr[1] -= 2;
        arr[0] -= 1;
    }
}
int abs(int input){
    if (input < 0){return -input;}
    else{return input;}
}
int cmp(char *ptr, char input){
    for(int i = 0; i < 8; i ++){
        if (*(ptr + i) == input){return i;}
    }
    return -1;
}
int main(){ 
    int start[2];
    int end[2];
    char arr[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    char t1, t2;
    while(scanf("%c%d %c%d", &t1, &start[1], &t2, &end[1]) != EOF){
        start[1] --;end[1] --;
        start[0] = cmp(&arr[0], t1);
        end[0] = cmp(&arr[0], t2);
        int count = 0;
        int rpos[2] = {abs(start[0] - end[0]), abs(start[1] - end[1])}; //相对位置的绝对值
        while(rpos[0] + rpos[1] > 2){
            process(&rpos[0]);
        }
        switch(rpos[0] + rpos[1]){
            case(1):
                count += 3;
                break;
            case(2):
                if (end[0] == 0 && end[1] == 0 ||
                    end[0] == 0 && end[1] == 7 ||
                    end[0] == 7 && end[1] == 0 ||
                    end[0] == 7 && end[1] == 7 ||
                    start[0] == 0 && start[1] == 0 ||
                    start[0] == 0 && start[1] == 7 ||
                    start[0] == 7 && start[1] == 0 ||
                    start[0] == 7 && start[1] == 7
                    )
                {
                    count += 4;
                }
                else{count += 2;}
                break;
            default:
                break;
        }
        printf("It takes %d steps from %c%d to %c%d\n", count, t1, start[1] + 1, t2, end[1] + 1);
    }
    return 0;
}