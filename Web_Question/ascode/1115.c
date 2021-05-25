#include <stdio.h>

int main()
{
    int T_case, x, y, count, iden = 0;
    scanf("%d", &T_case);

    while (T_case--)
    {
        iden = 0;
        int arr[10][10] = {0};
        scanf("%d%d", &x, &y);

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        if (x == y)                         // x == y
        {
            count = 0;
            for (int i = 0; i < x; i++)
            {
                for (int j = 0; j < y; j++)
                {
                    if (arr[i][j] == arr[j][i])
                    {
                        count++;
                    }
                }
            }
            if (count == x * y)
            {
                printf("Identical\n");
                iden = 1;
            }
        }

        if (iden != 1)
        {
            for (int i = 0; i < y; i++)
            {
                for (int j = 0; j < x; j++)
                {
                    printf("%d ", arr[j][i]);
                }
                printf("\n");
            }
        }
    }
}