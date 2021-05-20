#include <stdio.h>

int main(){
    char a;
    scanf("%c", &a);    //A 65 a 97
    a = (int)a - 32;
    printf("%c", a);
}