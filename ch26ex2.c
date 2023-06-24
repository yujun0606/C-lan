#include <stdio.h>

int get_total(int n);

int main()
{
    int n, sum = 0;

    printf("정수 입력 : ");
    scanf("%d", &n);

    printf("1~%d까지의 누적합 : %d", n, get_total(n));
    return 0;

}

int get_total(int n)
{
    int total = 0;
    for( int i=1; i<=n ; i++){
    total += i;
    }
    return total;
}
