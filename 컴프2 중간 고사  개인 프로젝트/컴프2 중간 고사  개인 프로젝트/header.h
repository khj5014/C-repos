#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#define SIZE 30

typedef struct inform {		// 수입 지출 내용을 구조체로 표현한다. 
	int income;				// 수입 
	int expense;			// 지출
	int carmoney;			// 잔액
	char contents[SIZE];	// 내용
}inform;

typedef struct wallet {
	inform khj;
	int month;			//월
	int day;			//일
}wallet;

void menu();							//메뉴출력함수선언
void manual();							//사용자매뉴얼
wallet get_record();					//사용자에게 데이터 받기 함수
void print_record(wallet data);			//출력함수선언
void add_record(FILE* fp, FILE* fp2);	//추가함수선언		메뉴(1)
void all_print(FILE* fp2);				//전체 리스트 출력  메뉴(2)
void search_record(FILE* fp);			//검색함수선언		메뉴(3)
