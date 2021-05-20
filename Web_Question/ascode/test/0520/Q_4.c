#include <stdio.h>

int main(void)
{
    int a, b, T_case;

    scanf("%d", &T_case);
    while (T_case--)
    {

        scanf("%d", &a);
        scanf("%d", &b);

        if (a == 1 && b == 1)
        {
            printf("*\n");
        }
        else if (a == 2 && b == 1)
        {
            printf("**\n");
        }

        else
        {
            for (int i = 1; i <= a; i++)
            {
                printf("*");
            }
            printf("\n");
            for (int i = 1; i <= b - 2; i++)
            {
                printf("*");
                for (int j = 1; j <= a - 2; j++)
                {
                    printf(" ");
                }
                printf("*\n");
            }
            for (int i = 1; i <= a; i++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}