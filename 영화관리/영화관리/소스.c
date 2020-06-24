#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct movie {	// 구조체 타입 정의
	char title[100];	// 영화 제목
	double rating;	// 영화 평점
} MOVIE;
int main(void)
{
	MOVIE* movies;	// 동적 메모리 공간을 가리키는 포인터
	int size, i;
	printf("몇 편이나 저장하시겠습니까? ");
	scanf_s("%d", &size);
	getchar();

	movies = (MOVIE*)malloc(sizeof(MOVIE) * size);	// 동적 메모리 할당
	if (movies == NULL) {
		printf("동적 메모리 할당 오류");
		exit(1);
	}
	for (i = 0; i < size; i++) {		// size편의 영화 정보 입력
		printf("영화 제목");
		gets_s(movies[i].title, 100);	// 영화 제목에는 빈칸이 있을 수 있다. 
		printf("영화 평점");
		scanf_s("%lf", &(movies[i].rating));
		getchar();
	}
	printf("========================\n");
	printf("제목 \t 평점 \n");
	printf("========================\n");
	for (i = 0; i < size; i++)
	
		printf("%s \t %f \n", movies[i].title, movies[i].rating);
	printf("\n========================\n");
	
	printf("\n\n\n\n학번 : 20174257 김희재\n\n\n");
	free(movies);			// 동적 메모리 공간 해제
	return 0;
}