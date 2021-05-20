#include <stdio.h>

int main(){
    int a, answer, seven;
    answer = 0;
    seven = 7;

    while(seven--){
        scanf("%d", &a);
        answer += a;
    }
    printf("%d", answer/7);
}