#include <stdio.h>

int main(){
    int a, coin500, coin100, coin50;
    scanf("%d", &a);

    coin500 = a/500;
    coin100 = a%500/100;
    coin50 = a%500%100/50;

    printf("500:%d 100:%d 50:%d", coin500, coin100, coin50);
}