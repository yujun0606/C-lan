#include <stdio.h>

int get_divisor(int n);

int main()
{
    int n;
    printf("����� ���� ������ �Է��ϼ��� : ");
    scanf("%d", &n);

    printf("%d�� ����� ������ %d��", n, get_divisor(n));
    return 0;
}

int get_divisor(int n)
{
    int cnt = 0; //����� ������ ī�����ϴ� ����
    for( int i = 1; i<=n; i++){
        if( n % i == 0){
            cnt++;
        }
    }
    return cnt;
}
