//�ؽ�Ʈ���� ������� ���� ���ڵ����� ����
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr = fopen("data.txt", "w");

    if( fptr == NULL) {
        printf("file open fail");
        exit(1);
    }
    fputs("Hello!\n", fptr);
    fputs("I am yujun\n", fptr);
    fputc('A', fptr);

    fclose(fptr);

    return 0;
}
