//성적을 입력받아 평균을 계산하여 출력하는 구조화 프로그래밍
#include <stdio.h>
#define MAX_SIZE 5
void input_score(int scores[]);
float compute_avg(int scores[]);
void print_avg(float avg);
int main()
{
    int scores[MAX_SIZE];; //성적 배열
    float avg;

    input_score(scores); // 배열에 성적 저장하기 위한 함수 호출
    avg = compute_avg(scores);// 평균 계산해서 반환하는 함수 호출
    print_avg(avg);// 평균 출력하는 함수 호출

    return 0;
}

void input_score(int scores[])// 전달받은 배열에 입력한 성적 저장하기
{
    for( int i=0; i<MAX_SIZE; i++){
        printf("%d 번째 학생의 성정은?", i+1);
        scanf("%d", &scores[i]);
    }
}

float compute_avg(int scores[])
{
    int sum = 0;
    for( int i=0; i < MAX_SIZE; i++){
        sum += scores[i];
    }
    return (float)sum / MAX_SIZE ;
}

void print_avg(float avg)
{
    printf("평군 : %.1f점", avg);
}
