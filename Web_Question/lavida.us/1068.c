#include <stdio.h>

int main()
{
    int T_case;

    scanf("%d", &T_case);

    while (T_case--)
    {
        int a, b, c, d;
        int arr1[100][100] = {0}, arr2[100][100] = {0}, answer[100][100] = {0};

        scanf("%d%d", &a, &b);

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                scanf("%d", &arr1[i][j]); //ù��° �迭 �Է¹ޱ�
            }
        }

        scanf("%d%d", &c, &d);

        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < d; j++)
            {
                scanf("%d", &arr2[i][j]); //�ι�° �迭 �Է¹ޱ�
            }
        }

        if (a == c && b == d) //�迭 ũ�� ��
        {
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    answer[i][j] = arr1[i][j] + arr2[i][j]; //�� �� ���ϱ�
                }
            }

            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    printf("%d ", answer[i][j]); //�� ���
                }
                printf("\n");
            }
        }

        else //�迭 ũ�Ⱑ �ٸ��� �Ұ��� ���
        {
            printf("Impossible\n");
        }
    }
}
