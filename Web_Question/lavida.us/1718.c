/*
KTY�� ������ X�϶� �̿� �´� ������ ����ϴ� ���α׷��� �ۼ��϶�.
������ ���� ������  ������ ����.
X�� 100�̸� A++
97~99�̸� A+
93~96�̸� A
90~92�̸� A-
87~89�̸� B+
83~86�̸� B
80~82�̸� B-
    .
    .
    .
67~69�̸� D+
63~66�̸� D
60~62�̸� D-
X < 60�̸� F
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