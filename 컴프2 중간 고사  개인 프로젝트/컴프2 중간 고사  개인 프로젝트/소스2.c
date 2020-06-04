#include "header.h"

// 데이터를 추가한다  (메뉴 1)
void add_record(FILE* fp, FILE* fp2)
{
	wallet data;
	char a = ' ';
	char b = '\n';
	
	data = get_record();			// 데이터를 받아서 구조체에 저장
	fseek(fp, 0, SEEK_END);			// 파일의 끝으로 간다	
	fwrite(&data, sizeof(data), 1, fp);	// 구조체 데이터를 파일에 쓴다
	
	
	// 구조체 데이터를 파일에 쓴다
	fputc(b, fp2);					//공백으로 구조체 사이를 채워 텍스트에서 값을 구분함
	fputs(data.date, fp2);		for (int i = 0; i < 10; i++) { fputc(a, fp2); }	// 날짜입력
	fputs(data.income, fp2);	for (int i = 0; i < 10; i++) { fputc(a, fp2); }	// 수입입력
	fputs(data.expense, fp2);	for (int i = 0; i < 10; i++) { fputc(a, fp2); }	// 지출입력
	/* fputs(data.carmoney, fp2);	for (int i = 0; i < 10; i++) { fputc(a, fp2); }	// 지출입력 */
	fputs(data.contents, fp2);		// 내용입력
}


//입력된 모든 날짜에 등록된 정보 출력함수 (메뉴 2)
void all_print(FILE* fp2)
{
	system("cls");
	char bf[SIZE] = { NULL };

	
	printf("날짜          수입         지출          잔액          내용");
	while (!feof(fp2))
	{
		fgets(bf, SIZE, fp2);
		printf("%s", bf);
	}
	printf("\n");
}



// 날짜를 탐색한다    (메뉴 3)
void search_record(FILE* fp)
{
	system("cls");
	char date[SIZE];
	wallet data;
	
	fseek(fp, 0, SEEK_SET);			// 파일의 처음으로 간다
	getchar();
	printf(" \n 날짜를 입력해주세요 : ");
	gets_s(date, SIZE);					// 이름을 입력받는다
	while (!feof(fp)) {					// 파일의 끝까지 반복한다
		fread(&data, sizeof(data), 1, fp);
		if (strcmp(data.date, date) == 0) {		// 날짜를 비교한다
			print_record(data);
			break;
		}
	}
}