#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    n += 1;
    char w[7][10] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday", "Sunday"};
    int wflag = 4; //第0天是周六
    /*
    下面这段处理周数
    */
    wflag += (n % 7);
    if (wflag >= 7){wflag -= 7;}
    int year = 2000;
    int month = 1;
    /*
    n天内的闰年数
    */
    int dyears = 1;
    int ryears = 1;
    int ryears_n = n - 366;
    while(ryears_n >= 365){
        if (dyears % 4 == 0 && dyears % 100 != 0 || dyears % 400 == 0){
            ryears_n -= 366;
            ryears += 1;
        }
        else{
            ryears_n -= 365;
        }
        dyears += 1;
    }
    int rmonths[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int months = 0;
    if (dyears % 4 == 0 && dyears % 100 != 0 || dyears % 400 == 0){
        ryears += 1;
    }
    if (ryears_n < 0){ryears_n = n;}
    else{dyears += 1;}
    dyears -= 1;
    while (ryears_n >= 29){
        if ((dyears % 4 == 0 && dyears % 100 != 0 || dyears % 400 == 0) && months == 1){
            ryears_n -= 29;
            months += 1;
        }
        else{
            if (ryears_n - rmonths[months] > 0){
                ryears_n -= rmonths[months];
                months += 1;
            }
            else{
                break;
            }
        }
        if (months > 11){months -= 12;}
    }
    dyears += 1;
    printf("%d - %d - %d %s\n", 1999 + dyears, months + 1, ryears_n, w[wflag]);
    return 0;
}