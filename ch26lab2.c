#include <stdio.h>

int get_divisor(int n);

int main()
{
    int n;
    printf("약수를 구할 정수를 입력하세요 : ");
    scanf("%d", &n);

    printf("%d의 약수의 개수는 %d개", n, get_divisor(n));
    return 0;
}

int get_divisor(int n)
{
    int cnt = 0; //약수의 개수를 카운팅하는 변수
    for( int i = 1; i<=n; i++){
        if( n % i == 0){
            cnt++;
        }
    }
    return cnt;
}
