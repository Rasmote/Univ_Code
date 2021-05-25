#include <stdio.h>

int main()
{

    while (1)
    {
        int m, n, min, max;

        scanf("%d", &m);
        if (m == 0)
            break;

        min = 10000;
        s
            max = -10000;

        for (int i = 0; i < m; i++)
        {
            scanf("%d", &n);
            if (min > n)
                min = n;
            if (max < n)
                max = n;
        }

        if (max == min)
        {
            printf("Same\n");
        }
        else if ((max - min) % 3 == 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}