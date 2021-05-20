#include <stdio.h>

int main(void) {
    int T_case;
    char a;

    scanf("%d", &T_case);

    while (T_case--)
    {
        scanf(" %c", &a);

        if (a >= 65 && a <= 90) {
            printf("%c\n", a + 32);
        }
        else if(a >= 97 && a <= 122) {
            printf("%c\n", a - 32);
        }

    }

}