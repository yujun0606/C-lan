//������ �Է¹޾� ����� ����Ͽ� ����ϴ� ����ȭ ���α׷���
#include <stdio.h>
#define MAX_SIZE 5
void input_score(int scores[]);
float compute_avg(int scores[]);
void print_avg(float avg);
int main()
{
    int scores[MAX_SIZE];; //���� �迭
    float avg;

    input_score(scores); // �迭�� ���� �����ϱ� ���� �Լ� ȣ��
    avg = compute_avg(scores);// ��� ����ؼ� ��ȯ�ϴ� �Լ� ȣ��
    print_avg(avg);// ��� ����ϴ� �Լ� ȣ��

    return 0;
}

void input_score(int scores[])// ���޹��� �迭�� �Է��� ���� �����ϱ�
{
    for( int i=0; i<MAX_SIZE; i++){
        printf("%d ��° �л��� ������?", i+1);
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
    printf("�� : %.1f��", avg);
}
