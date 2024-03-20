#include <stdio.h>

int main(){
    int dataCount;
    scanf("%d", &dataCount);
    int processed[100][5] = {0};
    for (int i = 0; i < dataCount; i ++){
        int year,month,day,hour,min;
        scanf("%d.%d.%d %d:%d", &year, &month, &day, &hour, &min);
        if (min >= 60){
            hour += (int) (min / 60);
            min = min % 60;
        }
        if (hour >= 24){
            day += (int) (hour / 24);
            hour = hour % 24;
        }
        int rflag = 0;
        while(1){
            int tyear;
            if(month > 12){tyear = year +(int)(month / 12);}
            else{tyear = year;}
            if ((tyear % 4 == 0 && tyear % 100 != 0 || tyear % 400 == 0) && ((month - 1) % 12) + 1 == 2){
                rflag = 1;
            }
            int ndays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
            int rdays[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
            int *days;
            if (rflag == 1){
                days = &rdays[0];
            }
            else{
                days = &ndays[0];
            }
            if (day > days[((month - 1) % 12)]){
                day -= days[((month - 1) % 12)];
                month += 1;
            }
            else{break;}
        }

        if (month > 12){
            year += (int)(month / 12);
            month = ((month - 1) % 12) + 1;
        }
        processed[i][0] = year;
        processed[i][1] = month;
        processed[i][2] = day;
        processed[i][3] = hour;
        processed[i][4] = min;
    }
    for(int i = 0; i < dataCount; i ++){
        if(processed[i][0] <= 9999){
            printf("%04d.%02d.%02d %02d:%02d\n", processed[i][0], processed[i][1], processed[i][2], processed[i][3], processed[i][4]);
        }
        else{
            printf("%5d.%02d.%02d %02d:%02d\n", processed[i][0], processed[i][1], processed[i][2], processed[i][3], processed[i][4]);
        }
    }
    return 0;
}