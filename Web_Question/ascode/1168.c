#include <stdio.h>

int main()
{
    int T_case;
    scanf("%d", &T_case);

    while (T_case--)
    {
        int answer[100], Answer_Sum = 0;
        char n1[31] ={0}, n2[31] ={0};
        
        scanf("%s", n1);
        scanf("%s", n2);

        for (int i = 0; i < 31; i++)
        {
            if(n1[i] != 0)
            {
                n1[i] = n1[i] - 64;
            }
            if(n2[i] != 0)
            {
                n2[i] = n2[i] - 64;
            }
            answer[i] = n1[i] - n2[i]; // ù��°�� �ι�° �̸� ����
            if(answer[i] < 0)
            {
                answer[i] = answer[i] * -1;
            }
        }

        for (int i = 0; i < 31; i++)
        {
            Answer_Sum += answer[i]; // �� ���ϱ�
        }
        printf("%d\n", Answer_Sum);
    }
}