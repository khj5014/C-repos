#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#define SIZE 50

typedef struct wallet {			// ���� ���� ������ ����ü�� ǥ���Ѵ�. 
	char date[SIZE];			// ��¥   
	int income[SIZE];			// ���� 
	int expense[SIZE];			// ����
	int carmoney[SIZE];			// �ܾ�
	char contents[SIZE];		// ����
} wallet;

void menu();							//�޴�����Լ�����
wallet get_record();					//����ڿ��� ������ �ޱ� �Լ�
void print_record(wallet data);			//����Լ�����
void add_record(FILE* fp, FILE* fp2);	//�߰��Լ�����		�޴�(1)
void all_print(FILE* fp2);				//��ü ����Ʈ ���  �޴�(2)
void search_record(FILE* fp2);			//�˻��Լ�����		�޴�(3)
