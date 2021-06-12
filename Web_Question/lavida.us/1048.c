#include <stdio.h>

int main()
{
    int T_case, num, min, arr[100], sum, mid, temp, answer;

    scanf("%d", &T_case);

    while (T_case--)
    {
        sum = 0;
        scanf("%d", &num);              //num : 입력받을 변수 수
        for (int i = 0; i < num; i++)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        mid = sum / num;                //mid : 평균값

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