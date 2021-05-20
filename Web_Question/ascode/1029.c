#include <stdio.h>

int main(){
    int time;
    int day, hour, minute, second;

    scanf("%d", &time);

    day = time/(3600*24);
    hour = time/3600%24;
    minute = time/60%60;
    second = time%60;

    printf("%d %d %d %d", day, hour, minute, second);
}