//크기가 5인 문자포인터 배열을 선언하고 영화제목으로 초기화한다
//사용자로부터 평점을 기게한 후 , 평점과 영화제목을 출력한다
#include <stdio.h>
#include <ctype.h>

int main()
{
    int i;
    char ans;
    char *movies[5] = {"Mission impossible", "Incredible", "Avergers", "Big Hero", "Crime city 3"};
    int movie_rating[5]; //평점을 저장하는 배열. movies[] 배열과 동기화
    printf("영화 후보작들을 평가해주세요 =========\n ");

    for( i=0; i<5;i++){
        printf("\n영화 %s 를 보셨나요?(y/n) : ", movies[i]);
        scanf(" %c", &ans);
        if(toupper(ans)=='Y'){
            printf("\n평점을 매겨주세요(0 ~10점 사이)");
            scanf("%d", &movie_rating[i]);
            continue;
        }
        movie_rating[i] = -1;
    }
    int temp_rating, j;
    char *temp_movie;
    for( i=0; i<4; i++){
        for(j=0; j<4-i;j++){
            if(movie_rating[j] < movie_rating[j+1]){
            temp_rating = movie_rating[j];
            movie_rating[j] = movie_rating[j+1];
            movie_rating[j+1] = temp_rating;

            temp_movie = movies[j];
            movies[j] = movies[j+1];
            movies[j+1] = temp_movie;
            }
        }
    }
    printf("\n -----------여러분들의 평점 결과-----------\n");
    for( i = 0; i<5; i++){
        if(movie_rating[i] >= 0 ){
            printf("영화 %s는 평점이 %d점입니다\n ", movies[i], movie_rating[i]);
        }
    }
    return 0;
}
