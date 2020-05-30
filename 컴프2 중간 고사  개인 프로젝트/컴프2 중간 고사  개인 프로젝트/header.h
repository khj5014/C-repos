#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 25


typedef struct wallet {			// 수입 지출 내용을 구조체로 표현한다. 
	char date[SIZE];			// 날짜   
	char income[SIZE];			// 수입 
	char expense[SIZE];			// 지출
	char Contents[SIZE];		// 내용
	char money[SIZE];			// 잔액
} wallet;

wallet get_record();			//쓰기함수선언

void menu();					//메뉴출력함수선언
void print_record(wallet data); //출력함수선언
void add_record(FILE* fp);		//추가함수선언
void search_record(FILE* fp);	//검색함수선언
void money(FILE* fp);	//업데이트함수선언
void all_print(FILE* fp);