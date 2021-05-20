#include <stdio.h>

int main(){
    int money, coin500, coin100, coin10;
    scanf("%d", &money);

    coin500 = money/500;
    coin100 = money%500/100;
    coin10 = money%500%100/10;

    printf("%d\n%d\n%d", coin500, coin100, coin10);
}