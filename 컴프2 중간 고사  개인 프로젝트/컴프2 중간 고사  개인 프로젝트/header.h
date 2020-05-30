#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 25


typedef struct wallet {			// ���� ���� ������ ����ü�� ǥ���Ѵ�. 
	char date[SIZE];			// ��¥   
	char income[SIZE];			// ���� 
	char expense[SIZE];			// ����
	char Contents[SIZE];		// ����
	char money[SIZE];			// �ܾ�
} wallet;

wallet get_record();			//�����Լ�����

void menu();					//�޴�����Լ�����
void print_record(wallet data); //����Լ�����
void add_record(FILE* fp);		//�߰��Լ�����
void search_record(FILE* fp);	//�˻��Լ�����
void money(FILE* fp);	//������Ʈ�Լ�����
void all_print(FILE* fp);