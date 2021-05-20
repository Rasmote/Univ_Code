#include <stdio.h>

int main(){
    int a, b, c, answer;

    scanf("%d%d%d", &a, &b, &c);
    answer = (b*b) - (4*a*c); 

    if (answer > 0){
        printf("1");
    }
    else if (answer == 0){
        printf("0");
    }
    else {
        printf("-1");
    }
}