#include <stdio.h>

int main(){
    unsigned int a;
    scanf("%d", &a);

    if(( a%2 == 0 && a%7 == 0) || (a%3 == 0)){
        printf("Magic");
    }
    else{
        printf("No Magic");
    }
}