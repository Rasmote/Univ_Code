#include <stdio.h>

int main(){

    int x,a,b;
    scanf("%d",&x);

    while(x--){
        scanf("%d",&a);

        b=a%1000000;
        printf("%.2d\n",b/10000);
    }
    
}