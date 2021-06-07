#include <stdio.h>

int main()
{
    int T_case, a, b;
    int arr[100][100] = {0}, answer[100][100] = {0};

    scanf("%d", &T_case);

    while (T_case--)
    {
        scanf("%d%d", &a, &b);

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j < a; j++)
            {
                printf("%d ", arr[j][i]);
            }
            printf("\n");
        }
    }
}