#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct movie {	// ����ü Ÿ�� ����
	char title[100];	// ��ȭ ����
	double rating;	// ��ȭ ����
} MOVIE;
int main(void)
{
	MOVIE* movies;	// ���� �޸� ������ ����Ű�� ������
	int size, i;
	printf("�� ���̳� �����Ͻðڽ��ϱ�? ");
	scanf_s("%d", &size);
	getchar();

	movies = (MOVIE*)malloc(sizeof(MOVIE) * size);	// ���� �޸� �Ҵ�
	if (movies == NULL) {
		printf("���� �޸� �Ҵ� ����");
		exit(1);
	}
	for (i = 0; i < size; i++) {		// size���� ��ȭ ���� �Է�
		printf("��ȭ ����");
		gets_s(movies[i].title, 100);	// ��ȭ ���񿡴� ��ĭ�� ���� �� �ִ�. 
		printf("��ȭ ����");
		scanf_s("%lf", &(movies[i].rating));
		getchar();
	}
	printf("========================\n");
	printf("���� \t ���� \n");
	printf("========================\n");
	for (i = 0; i < size; i++)
	
		printf("%s \t %f \n", movies[i].title, movies[i].rating);
	printf("\n========================\n");
	
	printf("\n\n\n\n�й� : 20174257 ������\n\n\n");
	free(movies);			// ���� �޸� ���� ����
	return 0;
}