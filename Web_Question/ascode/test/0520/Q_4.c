#include <stdio.h>

int main(void)
{
    int a, b, T_case;

    scanf("%d", &T_case);
    while (T_case--)
    {

        scanf("%d%d", &a, &b);

        for (int y = 0; y < b; y++)
        {
            for (int x = 0; x < a; x++)
            {
                if (y == 0 || x == 0 || x == a - 1 || y == b - 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}