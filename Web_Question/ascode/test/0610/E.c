#include <stdio.h>      //오류예상, a랑 b가 같은 경우

int main()
{
    int T_case;
    scanf("%d", &T_case);
    while(T_case--)
    {
        int a, b, answer = 0;               //a , b : 입력받는 수, answer : 답
        int comparison = 0, temp;       //com, temp : 두 수 비교할때 사용
        int div = 0;                        //div : 과잉수 판단

        scanf("%d%d", &a, &b);

        if (b < a)
        {
            temp = a;
            a = b;
            b = temp;
            comparison = 1;             //a b중 큰 수가 무조건 b이게
        }

        for (int i = a; i <= b; i++)     //a부터 b까지 반복,
        {
            div = 0;
            for (int j = 1; j < i; j++)
            {
                if(i%j == 0)
                {
                    div += j;           //j로 i를 나눴을때 나누어떨어지면 j값 div에 더하기
                }
            }
            if(div  > i)                //과잉수 판단
            {
                answer++;
            }
        }

        if(comparison == 1)
        {
            printf("%d-%d:%d\n", b, a, answer);     //a와 b 위치를 바꿧을 경우
        }
        else
        {
            printf("%d-%d:%d\n", a, b, answer);
        }
    }
}