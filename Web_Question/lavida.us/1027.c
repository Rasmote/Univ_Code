#include <stdio.h>

int main()
{
    int T_case, a;
    int answer = 0;

    scanf("%d", &T_case);

    while (T_case--)
    {
        scanf("%d", &a);
        for (int i = 1; i <= a; i++)
        {
            answer = answer + i;
        }

        printf("%d\n", answer);
        answer = 0;
    }
}