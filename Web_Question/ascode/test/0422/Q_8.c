#include <stdio.h>
 
int main()
{
    int test,a,b,c;
 
    scanf("%d", &test);
    while (test--) {
        scanf("%d %d %d", &a,&b,&c);
        if (65<=a && a<=90 && 65<=b && b<=90 && 65<=c && c<=90) {
            printf("%c%c%c\n",(char)a,(char)b,(char)c);
        }
        else {
            printf("No Uppercase!\n");
        }

    }
 
    return 0;
}