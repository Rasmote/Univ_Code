#include <stdio.h>      //��������, a�� b�� ���� ���

int main()
{
    int T_case;
    scanf("%d", &T_case);
    while(T_case--)
    {
        int a, b, answer = 0;               //a , b : �Է¹޴� ��, answer : ��
        int comparison = 0, temp;       //com, temp : �� �� ���Ҷ� ���
        int div = 0;                        //div : ���׼� �Ǵ�

        scanf("%d%d", &a, &b);

        if (b < a)
        {
            temp = a;
            a = b;
            b = temp;
            comparison = 1;             //a b�� ū ���� ������ b�̰�
        }

        for (int i = a; i <= b; i++)     //a���� b���� �ݺ�,
        {
            div = 0;
            for (int j = 1; j < i; j++)
            {
                if(i%j == 0)
                {
                    div += j;           //j�� i�� �������� ����������� j�� div�� ���ϱ�
                }
            }
            if(div  > i)                //���׼� �Ǵ�
            {
                answer++;
            }
        }

        if(comparison == 1)
        {
            printf("%d-%d:%d\n", b, a, answer);     //a�� b ��ġ�� �مf�� ���
        }
        else
        {
            printf("%d-%d:%d\n", a, b, answer);
        }
    }
}