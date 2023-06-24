#include <stdio.h>
int main()
{
    int ch;

    FILE *fptr = fopen("test.txt", "wt"); //파일 생성
    fputs("0123456789abcdefg", fptr);
    fclose(fptr);

    fptr = fopen("test.txt", "rt");

    fseek(fptr, 3, SEEK_SET);
    ch = fgetc(fptr);
    putchar(ch);

    fseek(fptr, 3, SEEK_CUR);
    ch = fgetc(fptr);
    putchar(ch);

    fseek(fptr, -3, SEEK_END);
    ch = fgetc(fptr);
    putchar(ch);

    fclose(fptr);
    return 0;
}
