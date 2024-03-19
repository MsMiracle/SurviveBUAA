#include <stdio.h>

#define N 101
int map[N][N];
int mark[N][N];
int move[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
void add(int *a, int *b, int *tmp){
    for (int i = 0; i < 2; i ++){
        tmp[i] = a[i] + b[i];
    }
}
struct linkedQueue{
    int *vec;
    struct linkedQueue *nextPtr;
    int level;
};
struct linkedQueue start;
void BFS(){
    printf("%d", start.nextPtr == NULL);
}