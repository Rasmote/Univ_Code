/*�ּҰ��̳� �ִ밪�� ������ ��쿡�� HMM!�̶�� ����ϰ�, 
�׷��� ���� ����ε� �ּҰ��� �ִ밪�� ���� ���� 0�� ��쿡�� ZERO��� ����ϰ�, 
�׷��� ���� ��쿡 ���� �� ���� 7�� ����̸� YES, �ƴϸ� NO ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

#include <stdio.h>

int main()
{
    int T_case, m, n, min, max, v;
    scanf("%d", &T_case);
    while (T_case--)
    {
        scanf("%d", &m);

        min = 10000;
        max = -10000;
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &n);
            if (min > n)
                min = n;
            if (max < n)
                max = n;
        }

        if (min < 0 || max < 0)
        {
            printf("HMM! \n");
        }
        else if (min + max == 0)
        {
            printf("ZERO\n");
        }
        else if ((min + max) % 7 == 0)
        {
            printf("YES \n");
        }
        else
        {
            printf("NO \n");
        }
    }
}