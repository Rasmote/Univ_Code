#include <stdio.h>

//�����Ϻ��� �Ϸ絵 �����ʰ� �Ƹ�����Ʈ�� �Ѵٰ� ������ ���, �����̰� ���ϴ� ������ Kram 15��ġ�� ����� �� ���� ���ؾ� �����ұ�?
//��ȭ����� : 40000, ���� : 80000
//������ : 360000

//ascode 1204��

int main()
{
    int T_case;
    scanf("%d", &T_case);
    while (T_case--)
    {
        int price, answer = 0;
        scanf("%d", &price);

        while (price >= 360000)
        {
            price -= 360000;
            answer += 7;
        }

        for (int i = 0; i < 5 && price > 0; i++)
        {
            price -= 40000;
            answer += 1;
        }
        for (int i = 0; i < 2 && price > 0; i++)
        {
            price -= 80000;
            answer += 1;
        }

        printf("%d\n", answer);
    }
}