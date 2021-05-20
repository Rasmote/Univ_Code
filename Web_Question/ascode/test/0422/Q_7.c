#include<stdio.h>

int main(void) {
    int score;
    int T_case;
    scanf("%d", &T_case);
    while(T_case--){
        scanf("%d", &score);
        if (score == 100)
            printf("You are perfect!\n");
        else if (score >= 80)
            printf("You are excellent.\n");
        else if (score >= 60)
            printf("You did a good job.\n");
        else if (score > 0)
            printf("You have to study hard.\n");
        else
            printf("No score.\n");
    }
}