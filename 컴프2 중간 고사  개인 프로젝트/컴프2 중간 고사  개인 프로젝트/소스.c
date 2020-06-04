#include "header.h"

//메인함수
int main(void)
{
	FILE* fp;
	FILE* fp2;
	int select;   //메뉴선택 정수값

	// 파일을 읽기쓰기기모드로 연다. 
	if ((fp = fopen("wallet.txt", "a+")) == NULL) {  //파일이 없으면 종료
		fprintf(stderr, "입력을 위한 파일을 열 수 없습니다");
		exit(1);
	}
	if ((fp2 = fopen("wallet2.txt", "a+")) == NULL) {
		fprintf(stderr, "입력을 위한 파일을 열 수 없습니다");
		exit(1);
	}
	while (1)
	{
		menu();		// 메뉴를 표시한다
		printf("   메뉴를 선택하세요(1~4) ");	// 사용자로부터 정수(메뉴선택)를 받는다
		if (scanf_s("%d", &select) == 0) {		//메뉴선택시 문자를 입력할 경우에 오류메시지 출력
			system("cls");						//콘솔창 지우기
			printf("   \n오류메시지 - 메뉴를 다시 선택해 주세요\n");
			rewind(stdin);
		}
		else if (select != 1 && select != 2 && select != 3 && select != 4) {
			system("cls");			//메뉴선택시 1 ~ 4 이외의 숫자를 입력할 경우에 오류메시지 출력
			printf("   \n오류메시지 - 메뉴를 다시 선택해 주세요\n");
		}
		switch (select) {
		case 1:	add_record(fp,fp2); break;	// 데이터를 추가한다
		case 2:	all_print(fp2); break;		// 전체리스트
		case 3:	search_record(fp); break;	// 데이터를 탐색한다
		case 4:	return 0;					// 종료
		}
	}
	fclose(fp);		// 파일을 닫는다
	fclose(fp2);	// 파일을 닫는다(검색용)
	return 0;
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

// 구조체 데이터를 화면에 출력한다. 
void print_record(wallet data)
{

	printf("\n ----------검색 내용---------- \n");
	printf("  날짜: %s\n", data.date);
	printf("  수입: %s\n", data.income);
	printf("  지출: %s\n", data.expense);
	printf("  잔액: %s\n", data.carmoney);
	printf("  내용: %s\n", data.contents);
	printf("  ----------------------------- ");
	printf("\n\n ");
}

wallet get_record()
{
	wallet data;

	getchar();		// 사용자로부터 데이터를 받아서 구조체에 저장
	printf("\n  날짜: "); gets_s(data.date, SIZE);			// 날짜을 입력받는다
	printf("  수입: ");	gets_s(data.income, SIZE);			// 수입를 입력받는다
	printf("  지출: ");	gets_s(data.expense, SIZE);			// 지출를 입력받는다
	/*	data.carmoney = (data.income - data.expense);			// 잔액 계산	*/
	printf("  내용: ");	gets_s(data.contents, SIZE);		// 내용을 입력받는다


	return data;
}