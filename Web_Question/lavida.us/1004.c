#include <stdio.h>

/*오늘 아침 존 류는  X m/s로 걷고 있다.
 집에서 Y m 떨어진 지점에서 소의 줄을 풀어주고 존 류도 방향을 바꿔 집으로 돌아간다.
 그의 소는 기운이 매우 넘치기 때문에 Z m/s로 집을 향해 뛰어간다.
*/

int main()
{
    int x, y, z, left_Dis;
    scanf("%d%d%d", &x, &y, &z);
    left_Dis = y;

    if (x < y)
    {
        for (; x < y; y -= x)
        {
                }
    }
}