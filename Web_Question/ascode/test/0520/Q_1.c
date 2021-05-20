#include <stdio.h>
#define wage 57000

int T_case, price, answer;

int main()
{
    scanf("%d", &price);
    answer = price / wage;

    if (price % wage != 0)
    {
        answer++;
    }
    printf("%d\n", answer);
}
