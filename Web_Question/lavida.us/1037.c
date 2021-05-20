//Test Case T가 주어지고 각 Test Case에 대해서 류주가 용돈 기입장을 기록한 일 수 N과 N개의 금액 M이 입력된다.
//각 Test Case에 대해서 총 사용금액과 하루평균 사용금액을 빈 칸으로 구분해서 한 줄에 출력한다.

#include <stdio.h>

int main(){
    int T_case;     //테스트 케이스 (무시)
    int day, cal_day, sum_money, money;

    sum_money = 0;
    scanf("%d", &T_case);
    scanf("%d", &day);
    cal_day = day;

    while(day--){
        scanf("%d", &money);
        sum_money += money;
    }

    printf("%d %d", sum_money, sum_money/cal_day);
}