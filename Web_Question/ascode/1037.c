#include <stdio.h>

int main(){
    unsigned int time;
    int week, day, hour, minute, second;

    scanf("%d", &time);

    week = time/604800;
    day = (time/(86400))%7;
    hour = (time/3600)%24;
    minute = time/60%60;
    second = time%60;

    printf("%d %d %d %d %d", week, day, hour, minute, second);
}