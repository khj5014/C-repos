#include "header.h"

// �����͸� �߰��Ѵ�  (�޴� 1)
void add_record(FILE* fp, FILE* fp2)
{
	wallet data;
	char a = ' ';
	char b = '\n';
	
	data = get_record();			// �����͸� �޾Ƽ� ����ü�� ����
	fseek(fp, 0, SEEK_END);			// ������ ������ ����	
	fwrite(&data, sizeof(data), 1, fp);	// ����ü �����͸� ���Ͽ� ����
	
	
	// ����ü �����͸� ���Ͽ� ����
	fputc(b, fp2);					//�������� ����ü ���̸� ä�� �ؽ�Ʈ���� ���� ������
	fputs(data.date, fp2);		for (int i = 0; i < 10; i++) { fputc(a, fp2); }	// ��¥�Է�
	fputs(data.income, fp2);	for (int i = 0; i < 10; i++) { fputc(a, fp2); }	// �����Է�
	fputs(data.expense, fp2);	for (int i = 0; i < 10; i++) { fputc(a, fp2); }	// �����Է�
	/* fputs(data.carmoney, fp2);	for (int i = 0; i < 10; i++) { fputc(a, fp2); }	// �����Է� */
	fputs(data.contents, fp2);		// �����Է�
}


//�Էµ� ��� ��¥�� ��ϵ� ���� ����Լ� (�޴� 2)
void all_print(FILE* fp2)
{
	system("cls");
	char bf[SIZE] = { NULL };

	
	printf("��¥          ����         ����          �ܾ�          ����");
	while (!feof(fp2))
	{
		fgets(bf, SIZE, fp2);
		printf("%s", bf);
	}
	printf("\n");
}



// ��¥�� Ž���Ѵ�    (�޴� 3)
void search_record(FILE* fp)
{
	system("cls");
	char date[SIZE];
	wallet data;
	
	fseek(fp, 0, SEEK_SET);			// ������ ó������ ����
	getchar();
	printf(" \n ��¥�� �Է����ּ��� : ");
	gets_s(date, SIZE);					// �̸��� �Է¹޴´�
	while (!feof(fp)) {					// ������ ������ �ݺ��Ѵ�
		fread(&data, sizeof(data), 1, fp);
		if (strcmp(data.date, date) == 0) {		// ��¥�� ���Ѵ�
			print_record(data);
			break;
		}
	}
}