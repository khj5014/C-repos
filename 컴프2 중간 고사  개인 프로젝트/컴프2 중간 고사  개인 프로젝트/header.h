#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <time.h>
#define SIZE 30

typedef struct wallet {		// 수입 지출 내용을 구조체로 표현한다. 
	int month;				// 달
	int day;				// 일
	int income;				// 수입 
	int expense;			// 지출
	int carmoney;			// 잔액
	char contents[SIZE];	// 내용
}wallet;

void menu();							//메뉴출력함수선언
void manual();							//사용자매뉴얼
void get_record();						//사용자에게 데이터 받기 함수
void print_record(wallet data);			//출력함수선언
void add_record(FILE* fp, FILE* fp2);	//추가함수선언		메뉴(1)
void all_print(FILE* fp2);				//전체 리스트 출력  메뉴(2)
int search_record(FILE* fp);			//검색함수선언		메뉴(3)
void err_err();							//에러출력
int get_day(text);						//몇일 함수선언
int get_month(text);					//몇월 함수선언
int get_int(text);						//정수받기 함수 선언

static FILE* fp = NULL;
static FILE* fp2 = NULL;