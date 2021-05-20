#include <stdio.h>

int main()
{
    int a, b, t;
    b = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &a);
        for (int j = 1; j <= a; j++)
        {
            b = b + j;
        }
        printf("%d\n", b);
        b = 0;
    }
}