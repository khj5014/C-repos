#include "header.h"

// 메뉴를 화면에 표시하는 함수
void menu()
{
	printf("\n");
	printf("       ■■■■■■■■ $  전자  기입장  $ ■■■■■■■■\n");
	printf("       ■                                                ■\n");
	printf("       ■              ☞  ① 매뉴얼                     ■\n");
	printf("       ■              ☞  ② 추가하기                   ■\n");
	printf("       ■              ☞  ③ 전체리스트                 ■\n");
	printf("       ■              ☞  ④ 날짜로 검색                ■\n");
	printf("       ■              ☞  ⑤ 종료                       ■\n");
	printf("       ■                                                ■\n");
	printf("       ■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
}

// 구조체 데이터를 화면에 출력한다. (검색용)
void print_record(wallet data)
{
	printf("\n  ♣♣♣♣♣검색 내용♣♣♣♣♣♣ \n");
	printf("  ♣\n");
	printf("  ♣   날짜: %d월 %d일\n", data.month, data.day);
	printf("  ♣   수입: %d\n", data.income);
	printf("  ♣   지출: %d\n", data.expense);
	printf("  ♣   차액: %d\n", data.carmoney);
	printf("  ♣   내용: %s\n", data.contents);
	printf("  ♣\n");
	printf("  ♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣ ");
	printf("\n\n ");
}

void manual()//사용자 매뉴얼(메뉴 1)
{
	int i = 0;
	int clock = 800;

	while (i != 10) {

		system("cls");
		if (i % 2 == 0)			printf("\n           ★ ★ ★ ★ ★ ★ ★ ★  사용자 매뉴얼  ★ ★ ★ ★ ★ ★ ★ ★\n\n");
		else if (i % 2 == 1)	printf("\n           ★ ★ ★ ★ ★ ★ ★ ★  사용자 매뉴얼  ★ ★ ★ ★ ★ ★ ★ ★\n\n");

		printf("\n     이 프로그램은 수입과 지출을 입력하여 자신이 얼마나 저축하고 사용하는지를 기록하여");
		printf("\n     소비습관을 올바르게 하고자 하는 목적을 가진 프로그램입니다.");
		printf("\n     최초실행시 exe프로그램이 위치한 경로에 텍스트파일이 생성됩니다.");
		printf("\n    ─────────────────────────※ 기능 설명 ※───────────────────────");
		printf("\n  ▶ ②번 메뉴 (추가하기)");
		printf("\n      날짜를 입력하고 날짜에 대한 수입, 지출, 사용 내역을 입력하게되면,");
		printf("\n      수입과 지출에 대한 차액은 자동으로 계산되어 메모장 파일에 저장될 것입니다.");
		printf("\n    ───────────────────────────────────────────────────────────────────");
		printf("\n  ▶ ③번 메뉴 (전체리스트)");
		printf("\n      전체 리스트 확인 기능입니다.");
		printf("\n      현재까지 입력된 정보들을 전부 학인 할 수 있는 메뉴입니다.");
		printf("\n    ───────────────────────────────────────────────────────────────────");
		printf("\n  ▶ ④번 메뉴 (날짜로 검색)");
		printf("\n      검색 기능 입니다.                                                         ");
		printf("\n      자신이 원하는 날짜에 대한 정보를 빠르게 찾을 수 있는 기능입니다.          ");
		printf("\n    ───────────────────────────────────────────────────────────────────");
		printf("\n  ▶ ⑤번 메뉴 (종료)");
		printf("\n      프로그램을 종료하는 기능입니다.\n\n");

		i++;
		Sleep(clock);
	}
	printf("  메뉴로 돌아갑니다.  ");
	system("pause");
}

void err_err() {
	printf("\n ♠ 오류메시지 -  메뉴를 다시 선택해 주세요\n");
	rewind(stdin);
	system("pause");
}