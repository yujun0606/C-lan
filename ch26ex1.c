#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_random();
int main()
{
    int r;
    r = get_random();

    printf("����� ��ȣ : %d", r);

}

int get_random()
{
    int r;

    srand((unsigned int)time(NULL));
    r = rand() %45 +1;

    return r;
}
