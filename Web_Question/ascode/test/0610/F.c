//"모든 학생들의 성적에서 가장 큰 점수와 가장 작은 점수를 뺀 나머지로 평균을 구해서 그 평균값에 가장 가까운 사람이 가장 평범한 사람이다."

#include<stdio.h>

int main()
{
    int T_case;
    scanf("%d", &T_case);

    while (T_case--)
    {
        int num, sum = 0, arr[30], min = 100000, max = -100000;
        int answer;
        float temp = 100000, check;

        float aver;       

        scanf("%d", &num);

        for (int i = 0; i < num; i++)
        {
            scanf("%d", &arr[i]);       //배열에 값 입력받기
            if(arr[i] < min)
            {
                min = arr[i];            //최솟값 확인
            }
            if(arr[i] > max)
            {
                max = arr[i];            //최댓값 확인
            }

            sum += arr[i];              //일단 입력받은 값 전부 더함
        }

        sum -= max;
        sum -= min;                     //최대 최소값 빼기
        aver = (float)sum / (float)(num - 2);               //평균값 구함

        for (int i = 0; i < num; i++)
        {
            check = arr[i] - aver;
            if(check < 0)
            {
                check *= -1;
            }

            if(check < temp)
            {
                temp = check;
                answer = arr[i];
            }
        }

        printf("%d\n", answer);
    }
    
}