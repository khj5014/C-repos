#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <time.h>
#define SIZE 30

typedef struct wallet {		// ���� ���� ������ ����ü�� ǥ���Ѵ�. 
	int month;				// ��
	int day;				// ��
	int income;				// ���� 
	int expense;			// ����
	int carmoney;			// �ܾ�
	char contents[SIZE];	// ����
}wallet;

void menu();							//�޴�����Լ�����
void manual();							//����ڸŴ���
void get_record();						//����ڿ��� ������ �ޱ� �Լ�
void print_record(wallet data);			//����Լ�����
void add_record(FILE* fp, FILE* fp2);	//�߰��Լ�����		�޴�(1)
void all_print(FILE* fp2);				//��ü ����Ʈ ���  �޴�(2)
int search_record(FILE* fp);			//�˻��Լ�����		�޴�(3)
void err_err();							//�������
int get_day(text);						//���� �Լ�����
int get_month(text);					//��� �Լ�����
int get_int(text);						//�����ޱ� �Լ� ����

static FILE* fp = NULL;
static FILE* fp2 = NULL;