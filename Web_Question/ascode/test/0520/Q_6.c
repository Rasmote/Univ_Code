#include <stdio.h>

int main()
{
    int student, loop = 0, score[101] = {
                               0,
                           },
                 credit[5] = {
                     0,
                 };

    while (1)
    {
        scanf("%d", &student);
        if (student == 0)
        {
            return 0;
        }
        loop++;
        for (int i = 0; i < student; i++)
        {
            scanf("%d", &score[i]);
        }

        for (int i = 0; i < student; i++)
        {
            if (score[i] >= 90)
            {
                credit[0]++;
            }
            else if (score[i] >= 80)
            {
                credit[1]++;
            }
            else if (score[i] >= 70)
            {
                credit[2]++;
            }
            else if (score[i] >= 60)
            {
                credit[3]++;
            }
            else
            {
                credit[4]++;
            }
        }

        printf("<%d>\n", loop);
        printf("A : %d\n", credit[0]);
        printf("B : %d\n", credit[1]);
        printf("C : %d\n", credit[2]);
        printf("D : %d\n", credit[3]);
        printf("F : %d\n\n", credit[4]);

        credit[0] = 0;
        credit[1] = 0;
        credit[2] = 0;
        credit[3] = 0;
        credit[4] = 0;
    }
}