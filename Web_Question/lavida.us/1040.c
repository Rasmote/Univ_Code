//거스름 돈에서 만 원의 개수, 오 천원의 개수, 천원의 개수, 오 백원의 개수, 백원의 개수를 빈 칸으로 구분해서 한 줄에 출력한다.

#include <stdio.h>

int main(){
    unsigned int T_case, money;
    int coin10000, coin5000, coin1000, coin500, coin100;

    scanf("%d", &T_case);

    while(T_case--){
        scanf("%d", &money);

        coin10000 = money / 10000;
        money %= 10000;

        coin5000 = money / 5000;
        money %= 5000;

        coin1000 = money / 1000;
        money %= 1000;

        coin500 = money / 500;
        money %= 500;

        coin100 = money / 100;
        money %= 100;

        printf("%d %d %d %d %d\n", coin10000, coin5000, coin1000, coin500, coin100);
    }
}