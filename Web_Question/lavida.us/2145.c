#include <stdio.h>

int main()
{

    int testCase;
    scanf("%d", &testCase);
    while (testCase--)
    {

        int size;
        scanf("%d", &size);

        for (int y = 0; y < size; y++)
        {
            int A = 1;
            for (int x = 0; x < size; x++)
            {
                if (x >= y && x < size - y)
                {
                    printf("%d", A + y);
                }

                else if (x <= size / 2 && x < size - y)
                {
                    printf("%d", A + x);
                }
                else if (x < y)
                {
                    printf("%d", A + size - y - 1);
                }
                else
                {
                    printf("%d", A + size - x - 1);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}