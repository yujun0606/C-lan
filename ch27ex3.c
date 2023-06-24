//파일로부터 학생들의 점수를 읽어와서 총점과 평균을 파일에 출력하기
#include <stdio.h>

typedef struct student_info {
    char name[30];
    int kor;
    int eng;
    int math;
}student_type;

int main()
{
    student_type st;
    int total;
    float avg;

    FILE *in_ptr = fopen("input.txt", "rt");
    FILE *out_ptr = fopen("output.txt", "wt");

    if( in_ptr == NULL || out_ptr == NULL){
        printf("file open fail");
        exit(1);
    }
    while(1) {
        if( fscanf(in_ptr, "%s %d %d %d", st.name, &st.kor, &st.eng, &st.math )== -1) break;
        total = st.kor + st.eng + st.math;
        avg = (float)total /3;

        fprintf(out_ptr, "%s %d %.2f\n", st.name, total, avg);
    }

    fclose(in_ptr);
    fclose(out_ptr);

    return 0;
}
