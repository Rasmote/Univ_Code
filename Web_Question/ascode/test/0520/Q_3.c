/*최소값이나 최대값이 음수인 경우에는 HMM!이라고 출력하고, 
그렇지 않은 경우인데 최소값과 최대값을 더한 값이 0인 경우에는 ZERO라고 출력하고, 
그렇지 않은 경우에 한해 그 합이 7의 배수이면 YES, 아니면 NO 라고 출력하는 프로그램을 작성하시오.*/

#include <stdio.h>

int main()
{
    int T_case, m, n, min, max, v;
    scanf("%d", &T_case);
    while (T_case--)
    {
        scanf("%d", &m);

        min = 10000;
        max = -10000;
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &n);
            if (min > n)
                min = n;
            if (max < n)
                max = n;
        }

        if (min < 0 || max < 0)
        {
            printf("HMM! \n");
        }
        else if (min + max == 0)
        {
            printf("ZERO\n");
        }
        else if ((min + max) % 7 == 0)
        {
            printf("YES \n");
        }
        else
        {
            printf("NO \n");
        }
    }
}