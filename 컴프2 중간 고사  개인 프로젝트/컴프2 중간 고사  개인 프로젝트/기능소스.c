#include "header.h"

wallet data = { NULL };

void get_record()
{
	system("cls");
	wallet *temp = malloc(sizeof(wallet));

	int x, y;

	getchar();		// 사용자로부터 데이터를 받아서 구조체에 저장

	temp->month = get_month("\n  '달'을  입력해주세요  ");
	temp->day = get_day("  '일'을  입력해주세요  ");
	x = temp->income = get_int("  '수입'이 얼마인가요?  ");
	y = temp->expense = get_int("  '지출'이 얼마인가요?  ");
	printf("  수입or지출에 대한 내용을 적어주세요 ");	gets_s(temp->contents, SIZE);	 // 내용을 입력받는다
	temp->carmoney = (x - y);		//차액 = 잔액( 잔액이 - 인 경우는 해당 날짜에 수입보다 지출이 더 많음을 의미 )

	data = *temp;
}

// 데이터를 추가한다  (메뉴 2)
void add_record(FILE* fp, FILE* fp2)
{
	// 파일1,2을 읽기쓰기기모드로 연다. 
	fp = fopen("wallet.dat", "a+");		//데이터저장
	fp2 = fopen("wallet2.txt", "a+");	//출력용

	// 구조체 데이터를 파일에 쓴다(검색용)
	get_record();						// 데이터를 받아서 구조체에 저장
	fseek(fp, 0, SEEK_END);				// 파일의 끝으로 간다	
	fwrite(&data, 1, sizeof(data), fp);	// 쓴다
	
	// 구조체 데이터를 파일에 쓴다(출력용)								
	fprintf(fp2, "\n│ %d월  %d일   %d         %d           %d         %s"
		, data.month, data.day, data.income, data.expense, data.carmoney, data.contents);

	printf("\n 입력이 완료되었습니다. 입력된 정보를 확인하시려면 3번메뉴를 이용해주세요\n");
	fclose(fp);
	fclose(fp2);
	system("pause");
}

//입력된 모든 날짜에 등록된 정보 출력함수 (메뉴 3)
void all_print(FILE* fp2)
{
	fp2 = fopen("wallet2.txt", "r");	//파일2 읽기모드 실행

	system("cls");
	char buf[SIZE] = { 0 };

	while (!feof(fp2))
	{
		fgets(buf, SIZE, fp2);
		printf("%s", buf);
	}
	printf("\n\n\n\n");

	fclose(fp2);		//파일 닫기
	printf(" 메뉴로 돌아가시려면.  ");
	system("pause");
}

// 날짜를 탐색한다    (메뉴 4)
int search_record(FILE* fp)
{
	system("cls");

	if ((fp = fopen("wallet.dat", "r")) == NULL)		//파일 읽기모드 실행
	{
		printf("\n\n ♠ 오류메시지 - 리스트에 아무것도 적혀있지 않습니다.\n   ");
		system("pause");
		return 0;
	}

	int i = 0;		//월 비교
	int j = 0;		//일 비교
	int pos = 0;

	getchar();
	printf(" \n 검색하실 날짜을 입력해주세요\n");// 날짜를 입력받는다

	i = get_month(" '몇'월 ▶  ");
	j = get_day(" '몇'일 ▶  ");

	fseek(fp, 0, SEEK_SET);			// 파일의 처음으로 간다

	while (!feof(fp))	//파일의 끝까지 반복한다
	{
		fread(&data, sizeof(data), 1, fp);

		if ((data.month == i) && (data.day == j))
		{
			pos++;
			print_record(data); break;
		}
	}
	if (pos == 0) { printf("\n ♠ 오류메시지 - 검색하신 날짜에 대한 정보가 없습니다.\n\n"); }

	fclose(fp);
	system("pause");
}