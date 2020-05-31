#include "header.h"

// 데이터를 추가한다  (메뉴 1)
void add_record(FILE* fp)
{
	wallet data;
	data = get_record();	// 사용자로부터 데이터를 받아서 구조체에 저장
	char a = ' ';
	char b = '\n';
	fputs(data.date, fp);	// 구조체 데이터를 파일에 쓴다
	for (int i = 0; i < 10; i++) { fputc(a, fp); }		//공백으로 구조체 사이를 채워 보기 편하게 만듬
	fputs(data.income, fp);
	for (int i = 0; i < 10; i++) { fputc(a, fp); }
	fputs(data.expense, fp);
	for (int i = 0; i < 10; i++) { fputc(a, fp); }


	fputs(data.carmoney, fp);
	for (int i = 0; i < 10; i++) { fputc(a, fp); }
	fputs(data.Contents, fp);
	fputc(b, fp);		//파일에 줄바꿈 입력
}


//입력된 모든 날짜에 등록된 정보 출력함수 (메뉴 2)
void all_print(FILE* fp)
{
	system("cls");
	char bf[SIZE];

	if ((fp = fopen("wallet.txt", "r") == NULL))
	{
		fprintf(stderr, " \n파일이 없습니다.\n", "wallet.txt");
	}
	fp = fopen("wallet.txt", "r");
	
	
	printf("\n   날짜          수입          지출          잔액          내용\n");
	
	while (!feof(fp))
	{
		fgets(bf, SIZE, fp);
		printf("   %s", bf);
	}
	fclose(fp);
	printf("\n");
}


// 데이터를 탐색한다 (메뉴 3)
void search_record(FILE* fp)
{
	char read[SIZE];
	wallet data;

	fp = fopen("wallet.txt", "r");
	printf("\n  탐색하고자 하는 날짜 : ");
	scanf("%s", &read);		// 탐색할 날짜 입력받는다


	if (read != data.date)
	{
		printf("\n▼ 해당 날짜 기록 ▼");
		print_record(data);
	}
	else {
		printf("해당 날짜에 기록이 없습니다. %d\n");
	}

	fclose(fp);
}