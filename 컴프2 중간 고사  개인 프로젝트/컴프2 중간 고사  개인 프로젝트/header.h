#pragma once
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#define SIZE 80



typedef struct wallet {			// 수입 지출 내용을 구조체로 표현한다. 
	char date[SIZE];			// 날짜   
	int income[SIZE];			// 수입 
	int expense[SIZE];			// 지출
	char carmoney[SIZE];		// 잔액
	char Contents[SIZE];		// 내용
} wallet;

wallet get_record();			//쓰기함수선언
void menu();					//메뉴출력함수선언
void print_record(wallet data); //출력함수선언
void add_record(FILE* fp);		//추가함수선언
void search_record(FILE* fp);	//검색함수선언
void all_print(FILE* fp);		//전체 리스트 출력