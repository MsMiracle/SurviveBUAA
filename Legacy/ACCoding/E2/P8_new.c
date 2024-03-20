#include <stdio.h>
#include <math.h>
#define eps 1e-9


struct student {
	char name[30];
	double time;
};
//建立储存角色和通关时间的结构体

void paixv(struct student arr[], int n) {
    int i, j;
    struct student temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j].time > arr[j+1].time) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
//对结构体按照时间排序的函数

int main() {
	
	int n;
	double T;
	scanf("%d%lf",&n,&T);
	struct student js[n];
	for(int i=0;i<n;i++) {
		scanf("%s %lf",js[i].name,&js[i].time);
	}//输入角色和速度
	for(int i=0;i<n;i++) {
		js[i].time=10000/js[i].time;
	}//把速度变为通关时间
	paixv(js,n);
	while((js[0].time<=T)||(fabs(js[0].time-T)<eps)) {
		printf("%s ",js[0].name);
		js[0].time*=2;
		paixv(js,n);
	}//多次排序并输出第一名的名字，直到时间超出T
	
	
	return 0;
}