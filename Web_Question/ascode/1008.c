#include <stdio.h>

int main(){
    int a, b, c, d, e, f;
    float result;
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
    result = (float)(a+b+c+d+e+f)/6;
    printf("%.4f", result);
}