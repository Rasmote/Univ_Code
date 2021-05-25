#include <stdio.h>

int main()
{
    int T_case, num, m, even;

    scanf("%d", &T_case);
    while (T_case--)
    {
        scanf("%d", &num);
        m = 0;
        even = 0;
        while (1)
        {
            m++;
            if (num == 1)
            {
                break;
            }
            else if (num % 2 == 1) // È¦¼öÀÏ¶§
            {
                num = num * 3 + 1;
            }
            else if (num % 2 == 0) // Â¦¼öÀÏ¶§
            {
                num = num / 2;
                even++;
            }
        }
        printf("%d %d\n", m, even);
    }
}