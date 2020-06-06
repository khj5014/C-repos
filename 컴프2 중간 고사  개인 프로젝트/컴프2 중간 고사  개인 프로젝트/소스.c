#include "header.h"

//메인함수
int main(void)
{
	FILE* fp;
	FILE* fp2;
	int select;   //메뉴선택 정수값

	if ((fp2 = fopen("wallet2.txt", "r")) == NULL)		//최초파일 생성시 첫번째줄에 쓸 내용
	{
		fp2 = fopen("wallet2.txt", "a+");
		fprintf(fp2, "│   날짜   │    수입    │    지출    │    통장    │            내용            │");
		fclose(fp2);
	}

	// 파일1,2을 읽기쓰기기모드로 연다. 
	fp = fopen("wallet.dat", "a+");		//데이터저장
	fp2 = fopen("wallet2.txt", "a+");	//출력용
	while (1)
	{
		menu();		// 메뉴를 표시한다
		printf("   메뉴를 선택하세요(1~5) ");	// 사용자로부터 정수(메뉴선택)를 받는다
		if (scanf_s("%d", &select) == 0) 		//메뉴선택시 문자를 입력할 경우에 오류메시지 출력
			{
				system("cls");						//콘솔창 지우기
				printf("   \n오류메시지 - 메뉴를 다시 선택해 주세요\n");
				rewind(stdin);
			}	//메뉴선택시 1 ~ 4 이외의 숫자를 입력할 경우에 오류메시지 출력
		if (select != 1 && select != 2 && select != 3 && select != 4 && select != 5) 
			{
				system("cls");						//콘솔창 지우기
				printf("   \n오류메시지 - 메뉴를 다시 선택해 주세요\n");
				rewind(stdin);
			}
		//메뉴선택
		switch (select) {
			case 1:	manual(); break;				//사용자 메뉴얼
			case 2:	add_record(fp, fp2); break;	// 데이터를 추가한다
			case 3:	all_print(fp2); break;		// 전체리스트
			case 4:	search_record(fp); break;	// 데이터를 탐색한다
			case 5:	return 0;
		}
	}
		fclose(fp);		// 파일을 닫는다(검색용)
		fclose(fp2);	// 파일을 닫는다(출력용)
		return 0;
	
}

// 메뉴를 화면에 표시하는 함수
	void menu()
{
	printf("\n");
	printf("  ■■ $ 전자 기입장 $  ■■\n");
	printf("  ■ ☞ ① 매뉴얼         ■\n");
	printf("  ■ ☞ ② 추가하기       ■\n");
	printf("  ■ ☞ ③ 전체리스트     ■\n");
	printf("  ■ ☞ ④ 날짜로 검색    ■\n");
	printf("  ■ ☞ ⑤ 종료           ■\n");
	printf("  ■■■■■■■■■■■■■\n");
}

// 구조체 데이터를 화면에 출력한다. 
void print_record(wallet data)
{
	printf("\n ----------검색 내용---------- \n");
	printf("  날짜: %d월 %d일\n", data.month, data.day);
	printf("  수입: %d\n", data.khj.income);
	printf("  지출: %d\n", data.khj.expense);
	printf("  잔액: %d\n", data.khj.carmoney);
	printf("  내용: %s\n", data.khj.contents);
	printf("  ----------------------------- ");
	printf("\n\n ");
}

void manual()
{
	system("cls");
	printf("\n  사용자 매뉴얼");

}