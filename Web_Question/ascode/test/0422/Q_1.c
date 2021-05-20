#include <stdio.h>
#define PI 3.1415926535897

int main(){
    double a;
    scanf("%lf", &a);

    printf("%.3lf", (a*a*PI));
}