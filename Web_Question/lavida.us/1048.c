#include <stdio.h>

int main()
{
    int T_case, num, min, arr[100], sum, mid, temp, answer;

    scanf("%d", &T_case);

    while (T_case--)
    {
        sum = 0;
        scanf("%d", &num);
        for (int i = 0; i < num; i++)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        mid = sum / num;

        min = 100000000;
        for (int i = 0; i < num; i++)
        {
            temp = arr[i] - mid;
            if (temp < 0){
                temp = -temp;
            }
            if(min > temp){
                answer = arr[i];
                min = temp;
            }
        }

        printf("%d\n", answer);
    }
}