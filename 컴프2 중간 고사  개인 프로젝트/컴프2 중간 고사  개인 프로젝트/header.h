#pragma once
#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#define SIZE 80



typedef struct wallet {			// ���� ���� ������ ����ü�� ǥ���Ѵ�. 
	char date[SIZE];			// ��¥   
	int income[SIZE];			// ���� 
	int expense[SIZE];			// ����
	char carmoney[SIZE];		// �ܾ�
	char Contents[SIZE];		// ����
} wallet;

wallet get_record();			//�����Լ�����
void menu();					//�޴�����Լ�����
void print_record(wallet data); //����Լ�����
void add_record(FILE* fp);		//�߰��Լ�����
void search_record(FILE* fp);	//�˻��Լ�����
void all_print(FILE* fp);		//��ü ����Ʈ ���