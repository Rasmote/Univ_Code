/*
KTY의 점수가 X일때 이에 맞는 학점을 출력하는 프로그램을 작성하라.
점수에 따른 학점은  다음과 같다.
X가 100이면 A++
97~99이면 A+
93~96이면 A
90~92이면 A-
87~89이면 B+
83~86이면 B
80~82이면 B-
    .
    .
    .
67~69이면 D+
63~66이면 D
60~62이면 D-
X < 60이면 F
*/
#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    if (a==100){
        printf("A++");
    }
    else if(a>=97){
        printf("A+");
    }
    else if(a>=93){
        printf("A");
    }
    else if(a>=90){
        printf("A-");
    }
    else if(a>=87){
        printf("B+");
    }
    else if(a>=83){
        printf("B");
    }
    else if(a>=80){
        printf("B-");
    }
    else if(a>=77){
        printf("C+");
    }
    else if(a>=73){
        printf("C");
    }
    else if(a>=70){
        printf("C-");
    }
    else if(a>=67){
        printf("D+");
    }
    else if(a>=63){
        printf("D");
    }
    else if(a>=60){
        printf("D-");
    }
    else{
        printf("F");
    }
}