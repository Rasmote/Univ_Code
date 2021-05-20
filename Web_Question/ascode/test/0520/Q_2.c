#include <stdio.h>

int main()
{
    int T_case, num, arr[999], m, even;
    scanf("%d", &T_case);

    while (T_case--)
    {
        scanf("%d", &num);

        for (int i = 0; i < 999; i++)
        {
            arr[i] = num;
            if (arr[i] == 1)
            {
                m = 1; //하다말음
                break;
            }
        }

        printf("%d %d\n", m, even);
    }
}