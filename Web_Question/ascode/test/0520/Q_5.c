#include <stdio.h>

int main(void)
{
    int a, T_case;

    scanf("%d", &T_case);
    while (T_case--)
    {

        scanf("%d", &a);

        for (int y = 0; y < a; y++)
        {
            for (int x = 0; x <= y; x++)
            {
                if (x == y || x == 0 || y == a - 1)
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