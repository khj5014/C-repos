#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#define SIZE 30

typedef struct inform {		// ���� ���� ������ ����ü�� ǥ���Ѵ�. 
	int income;				// ���� 
	int expense;			// ����
	int carmoney;			// �ܾ�
	char contents[SIZE];	// ����
}inform;

typedef struct wallet {
	inform khj;
	int month;			//��
	int day;			//��
}wallet;

void menu();							//�޴�����Լ�����
void manual();							//����ڸŴ���
wallet get_record();					//����ڿ��� ������ �ޱ� �Լ�
void print_record(wallet data);			//����Լ�����
void add_record(FILE* fp, FILE* fp2);	//�߰��Լ�����		�޴�(1)
void all_print(FILE* fp2);				//��ü ����Ʈ ���  �޴�(2)
void search_record(FILE* fp);			//�˻��Լ�����		�޴�(3)
