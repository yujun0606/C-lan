#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "wt");

    if( fptr == NULL){
        printf("file open fail");
        exit(1);
    }
    //������ ���α׷�
    fclose(fptr);

    return 0;
}
