//���� m, n, d1, d2�� �Էµ� ��� m��n�� ��� d1, d2�� ����������� �Ǵ��ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>

int main(){
    int T_case, m, n, d1, d2;
    scanf("%d", &T_case);

    while (T_case--)
    {
        scanf("%d%d%d%d", &m, &n, &d1, &d2);

        if( m%d1==0 && m%d2==0 && n%d1==0 && n%d2==0 ){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    
}