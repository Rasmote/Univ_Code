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
                scanf("%d", &arr1[i][j]); //첫번째 배열 입력받기
            }
        }

        scanf("%d%d", &c, &d);

        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < d; j++)
            {
                scanf("%d", &arr2[i][j]); //두번째 배열 입력받기
            }
        }

        if (a == c && b == d) //배열 크기 비교
        {
            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    answer[i][j] = arr1[i][j] + arr2[i][j]; //두 값 더하기
                }
            }

            for (int i = 0; i < a; i++)
            {
                for (int j = 0; j < b; j++)
                {
                    printf("%d ", answer[i][j]); //답 출력
                }
                printf("\n");
            }
        }

        else //배열 크기가 다르면 불가능 출력
        {
            printf("Impossible\n");
        }
    }
}
