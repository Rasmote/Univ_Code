//"��� �л����� �������� ���� ū ������ ���� ���� ������ �� �������� ����� ���ؼ� �� ��հ��� ���� ����� ����� ���� ����� ����̴�."

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
            scanf("%d", &arr[i]);       //�迭�� �� �Է¹ޱ�
            if(arr[i] < min)
            {
                min = arr[i];            //�ּڰ� Ȯ��
            }
            if(arr[i] > max)
            {
                max = arr[i];            //�ִ� Ȯ��
            }

            sum += arr[i];              //�ϴ� �Է¹��� �� ���� ����
        }

        sum -= max;
        sum -= min;                     //�ִ� �ּҰ� ����
        aver = (float)sum / (float)(num - 2);               //��հ� ����

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