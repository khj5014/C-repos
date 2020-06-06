#include "header.h"

wallet get_record()
{
	wallet data;

	int x, y;

	getchar();		// 사용자로부터 데이터를 받아서 구조체에 저장
	printf("  월 "); scanf("\n %d", &data.month);	rewind(stdin);	// 월를 입력받는다
	printf("  일 "); scanf(" %d", &data.day);	rewind(stdin);	// 일를 입력받는다
	printf("  수입: ");	scanf("%d", &x);	rewind(stdin);	// 수입를 입력받는다
	printf("  지출: "); scanf("%d", &y);	rewind(stdin);	// 지출를 입력받는다


	data.khj.income = x;
	data.khj.expense = y;
	data.khj.carmoney = (x-y);			//차액 = 잔액( 잔액이 - 인 경우는 해당 날짜에 수입보다 지출이 더 많음을 의미 )
	printf("  내용: ");	gets_s(data.khj.contents, SIZE);			// 내용을 입력받는다
	
	return data;
}

// 데이터를 추가한다  (메뉴 1)
void add_record(FILE* fp, FILE* fp2)
{
	wallet data;

	// 구조체 데이터를 파일에 쓴다(검색용)
	data = get_record();				// 데이터를 받아서 구조체에 저장
	fseek(fp, 0, SEEK_END);				// 파일의 끝으로 간다	
	fwrite(&data, 1, sizeof(data), fp);	//쓴다
	
	// 구조체 데이터를 파일에 쓴다(출력용)								
fprintf(fp2,"\n   %d월  %d일     %d            %d          %d            %s"
		,data.month,data.day,data.khj.income,data.khj.expense,data.khj.carmoney,data.khj.contents);
}


//입력된 모든 날짜에 등록된 정보 출력함수 (메뉴 2)
void all_print(FILE* fp2)
{
	system("cls");
	char buf[SIZE] = { NULL };

	while (!feof(fp2))
	{
		fgets(buf, SIZE, fp2);
		printf("%s", buf);
	}
	printf("\n\n\n\n");
}

// 날짜를 탐색한다    (메뉴 3)
void search_record(FILE* fp)
{
	system("cls");
	wallet data;
	char seach[SIZE];
	
	fseek(fp, 0, SEEK_SET);			// 파일의 처음으로 간다
	getchar();
	printf(" \n 검색하실 날짜를 입력해주세요\n");
	printf(" ▶  ");
	gets_s(seach, SIZE);					// 날짜를 입력받는다
	while (!feof(fp)) {					// 파일의 끝까지 반복한다
		fread(&data, sizeof(data), 1, fp);
		if (strcmp(data.month && data.day, seach) == 0) {		// 날짜를 비교한다
			print_record(data);
			break;
		}
		else
			printf("입력하신 날짜에 대한 정보가 없습니다.");
			printf("메뉴로 돌아갑니다.\n\n\n\n");
	}
}