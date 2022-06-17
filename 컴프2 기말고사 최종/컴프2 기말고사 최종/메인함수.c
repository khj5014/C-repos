#include "header.h"

//메인함수
int main(void)
{
	int k;
	system("color f3");
	int select;   //메뉴선택 정수값
	if ((fp2 = fopen("wallet2.txt", "r")) == NULL)		//최초파일 생성시 첫번째줄에 쓸 내용
	{
		fp2 = fopen("wallet2.txt", "a+");
		fprintf(fp2, " _____________________________________________________________________________________\n");
		fprintf(fp2, "│   날짜   │    수입    │    지출    │    차액    │               내용               │");
		fclose(fp2);
	}
	while (1)
	{
		system("cls");
		menu();		// 메뉴를 표시한다

		printf("\n\n     메뉴를 선택하세요(1~5) ");	// 사용자로부터 정수(메뉴선택)를 받는다

		if (scanf("%d", &select) == 0) 		//메뉴선택시 문자를 입력할 경우에 오류메시지 출력
		{
			err_err();
		}					//메뉴선택시 1 ~ 4 이외의 숫자를 입력할 경우에 오류메시지 출력
		if (select != 1 && select != 2 && select != 3 && select != 4 && select != 5)
		{
			err_err();
		}
		//메뉴선택
		switch (select) {
		case 1: manual();  break;		//사용자 메뉴얼	
		case 2:	add_record(fp, fp2); break;	// 데이터를 추가한다
		case 3:	all_print(fp2); break;		// 전체리스트
		case 4:	search_record(fp); break;	// 데이터를 탐색한다
		case 5:	system("cls");
			printf("\n\n   ★★★★★★★★★★★★★★★★\n");
			printf("   ◈  전자 기입장을 종료합니다. ◈\n");
			printf("   ★★★★★★★★★★★★★★★★\n"); return 0;
		}
	}
	return 0;
}