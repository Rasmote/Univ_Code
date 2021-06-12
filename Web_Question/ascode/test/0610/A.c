#include <stdio.h>

int main()
{
    int T_case;
    scanf("%d", &T_case);
    while(T_case--)
    {
        int num;
        scanf("%d", &num);
        for (int i = 0; i < num; i++)
        {
            for (int j = num - 1; j > i; j--)
            {
                printf(" ");
            }

            for (int j = 0; j < 2 * i + 1; j++)
            {
                printf("%d", i+1);
            }
            printf("\n");
        }
    }
}
