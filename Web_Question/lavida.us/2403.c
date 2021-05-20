#include <stdio.h>

int main(){
    int T_case, m, a, b, c;
    scanf("%d", &T_case);

    while (T_case--)
    {
        scanf("%d%d%d%d", &m, &a, &b, &c);
        if(m%a==0 && m%b==0 && m%c==0){
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    }
    
}