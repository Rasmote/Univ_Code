#include <stdio.h>
#define pi 3.14159265358979

int main(){

    double a, area;
    scanf("%lf", &a);

    a = (a*0.5);
    area = a*a*pi;

    printf("%.5lf", area);
}