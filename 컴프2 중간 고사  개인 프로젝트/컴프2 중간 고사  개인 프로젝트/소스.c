#include "header.h"

int main(void)
{
	FILE* fp;
	int select;   //메뉴선택 정수값
	// 이진 파일을 추가 모드로 오픈한다. 
	if ((fp = fopen("wallet.txt", "a+")) == NULL) {  //데이터가 없으면 종료
		fprintf(stderr, "입력을 위한 파일을 열 수 없습니다");
		exit(1);
	}
	while (1)
	{
		menu();								// 메뉴를 표시한다
		printf("   메뉴를 선택하세요(1~4) ");	// 사용자로부터 정수(메뉴선택)를 받는다
		if (scanf_s("%d", &select) == 0) {
			system("cls");
			printf("   \n오류메시지 - 메뉴를 다시 선택해 주세요\n");
			rewind(stdin);
		}
		else if (select != 1 && select != 2 && select != 3 && select != 4) {
			system("cls");
			printf("   \n오류메시지 - 메뉴를 다시 선택해 주세요\n");
		}
			switch (select) {
			case 1:	add_record(fp); break;		// 데이터를 추가한다
			case 2:	all_print(fp); break;			// 잔액계산기
			case 3:	search_record(fp); break;	// 데이터를 탐색한다
			case 4:	return 0;
			}
	}
	
	fclose(fp);	// 이진 파일을 닫는다
	return 0;
}

// 구조체함수
wallet get_record()
{
	wallet data;
	getchar();
	printf("\n  날짜: "); 	gets_s(data.date, SIZE);	// 날짜을 입력받는다
	printf("  수입: ");	gets_s(data.income, SIZE);		// 수입를 입력받는다
	printf("  지출: ");	gets_s(data.expense, SIZE);		// 지출를 입력받는다
	printf("  내용: ");	gets_s(data.Contents, SIZE);	// 내용을 입력받는다
	return data;
}

// 데이터를 추가한다
void add_record(FILE* fp)
{
	wallet data;
	data = get_record();	// 사용자로부터 데이터를 받아서 구조체에 저장
	fseek(fp, 0, SEEK_END);	// 파일의 끝으로 간다	
	fwrite(&data, sizeof(data), 1, fp);	// 구조체 데이터를 파일에 쓴다
}


// 구조체 데이터를 화면에 출력한다. 
void print_record(wallet data)
{
	FILE* fp = NULL;
	
	printf("\n  ----------검색 내용---------- \n");
	printf("  날짜: %s\n", data.date);
	printf("  수입: %s\n", data.income);
	printf("  지출: %s\n", data.expense);
	printf("  내용: %s\n", data.Contents);
	printf("  잔액: %s원\n", data.money);
	printf("  ----------------------------- ");
	printf("\n\n ");
}

// 메뉴를 화면에 표시하는 함수
void menu()
{
	printf("\n");
	printf("  ■■ $ 전자 기입장 $  ■■\n");
	printf("  ■ ☞ ① 추가하기       ■\n");
	printf("  ■ ☞ ② 전체리스트     ■\n");
	printf("  ■ ☞ ③ 날짜로 검색    ■\n");
	printf("  ■ ☞ ④ 종료           ■\n");
	printf("  ■■■■■■■■■■■■■\n");
}

// 데이터를 탐색한다

void search_record(FILE* fp)
{
	char date[SIZE];
	wallet data;
	fseek(fp, 0, SEEK_SET);	// 파일의 처음으로 간다
	getchar();
	//스위치문 추가예정
	printf("\n  탐색하고자 하는 날짜 : ");
	gets_s(date, SIZE);		// 이름을 입력받는다
	while (!feof(fp)) {		// 파일의 끝까지 반복한다
		fread(&data, sizeof(data), 1, fp);
		if (strcmp(data.date, date) == 0) {	// 이름을 비교한다
			print_record(data);
			break;
		}
	}
}