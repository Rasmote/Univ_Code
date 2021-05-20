//정수 m, n, d1, d2가 입력될 경우 m과n이 모두 d1, d2의 공배수인지를 판단하는 프로그램을 작성하시오.

#include <stdio.h>

int main(){
    int T_case, m, n, d1, d2;
    scanf("%d", &T_case);

    while (T_case--)
    {
        scanf("%d%d%d%d", &m, &n, &d1, &d2);

        if( m%d1==0 && m%d2==0 && n%d1==0 && n%d2==0 ){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    
}