#include <stdio.h>
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
	movies = (MOVIE*)malloc(sizeof(MOVIE) * size);	// ���� �޸� �Ҵ�
	if (movies == NULL) {
		printf("���� �޸� �Ҵ� ����");
		exit(1);
	}
	for (i = 0; i < size; i++) {		// size���� ��ȭ ���� �Է�
		printf("��ȭ ����");
		fflush(stdin);		// �Է� ���۸� ����. 
		gets(movies[i].title);	// ��ȭ ���񿡴� ��ĭ�� ���� �� �ִ�. 
		printf("��ȭ ����");
		scanf_s("%lf", &(movies[i].rating));
	}
	printf("========================\n");
	printf("���� \t ���� \n");
	printf("========================\n");
	for (i = 0; i < size; i++)
	
		printf("%s \t %f \n", movies[i].title, movies[i].rating);
	printf("\n========================\n");
	free(movies);			// ���� �޸� ���� ����
	return 0;
}