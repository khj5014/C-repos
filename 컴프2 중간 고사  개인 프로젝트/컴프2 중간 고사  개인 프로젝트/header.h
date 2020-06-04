#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#define SIZE 50

typedef struct wallet {			// 수입 지출 내용을 구조체로 표현한다. 
	char date[SIZE];			// 날짜   
	int income[SIZE];			// 수입 
	int expense[SIZE];			// 지출
	int carmoney[SIZE];			// 잔액
	char contents[SIZE];		// 내용
} wallet;

void menu();							//메뉴출력함수선언
wallet get_record();					//사용자에게 데이터 받기 함수
void print_record(wallet data);			//출력함수선언
void add_record(FILE* fp, FILE* fp2);	//추가함수선언		메뉴(1)
void all_print(FILE* fp2);				//전체 리스트 출력  메뉴(2)
void search_record(FILE* fp2);			//검색함수선언		메뉴(3)
