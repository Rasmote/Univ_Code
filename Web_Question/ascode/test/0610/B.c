#include <stdio.h>

//월요일부터 하루도 쉬지않고 아르바이트를 한다고 가정할 경우, 신혁이가 원하는 가격의 Kram 15인치를 사려면 몇 일을 일해야 가능할까?
//월화수목금 : 40000, 토일 : 80000
//일주일 : 360000

//ascode 1204번

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