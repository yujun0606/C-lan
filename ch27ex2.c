//텍스트 파일을 읽기 모드로 열어 문자 데이터 읽기
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50];

    FILE *fptr = fopen("data.txt", "rt");

    if( fptr == NULL ) {
        printf("file open fail");
        exit(1);
    }

    while( fgets(str, sizeof(str), fptr) != NULL ){
        printf("%s", str);
    }

    fclose(fptr);
    return 0;
}
