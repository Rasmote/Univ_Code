#include <stdio.h>

int main(){
    int T_case;
    int num[3];

    scanf("%d", &T_case);

    while(T_case--){

        scanf("%d%d%d%d", &num[0], &num[1], &num[2], &num[3]);

        if(num[1]-num[0] == num[2]-num[1]){                 //등차수열일 때
            printf("%d", num[3]+(num[1]-num[0]));       
        }

        else{                                               //등비수열일 때
            printf("%d", num[3]*(num[1]/num[0]));       
        }

        printf("\n");
    }
}