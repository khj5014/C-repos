#include "header.h"

// �����͸� �߰��Ѵ�  (�޴� 1)
void add_record(FILE* fp)
{
	wallet data;
	data = get_record();	// ����ڷκ��� �����͸� �޾Ƽ� ����ü�� ����
	char a = ' ';
	char b = '\n';
	fputs(data.date, fp);	// ����ü �����͸� ���Ͽ� ����
	for (int i = 0; i < 10; i++) { fputc(a, fp); }		//�������� ����ü ���̸� ä�� ���� ���ϰ� ����
	fputs(data.income, fp);
	for (int i = 0; i < 10; i++) { fputc(a, fp); }
	fputs(data.expense, fp);
	for (int i = 0; i < 10; i++) { fputc(a, fp); }


	fputs(data.carmoney, fp);
	for (int i = 0; i < 10; i++) { fputc(a, fp); }
	fputs(data.Contents, fp);
	fputc(b, fp);		//���Ͽ� �ٹٲ� �Է�
}


//�Էµ� ��� ��¥�� ��ϵ� ���� ����Լ� (�޴� 2)
void all_print(FILE* fp)
{
	system("cls");
	char bf[SIZE];

	if ((fp = fopen("wallet.txt", "r") == NULL))
	{
		fprintf(stderr, " \n������ �����ϴ�.\n", "wallet.txt");
	}
	fp = fopen("wallet.txt", "r");
	
	
	printf("\n   ��¥          ����          ����          �ܾ�          ����\n");
	
	while (!feof(fp))
	{
		fgets(bf, SIZE, fp);
		printf("   %s", bf);
	}
	fclose(fp);
	printf("\n");
}


// �����͸� Ž���Ѵ� (�޴� 3)
void search_record(FILE* fp)
{
	char read[SIZE];
	wallet data;

	fp = fopen("wallet.txt", "r");
	printf("\n  Ž���ϰ��� �ϴ� ��¥ : ");
	scanf("%s", &read);		// Ž���� ��¥ �Է¹޴´�


	if (read != data.date)
	{
		printf("\n�� �ش� ��¥ ��� ��");
		print_record(data);
	}
	else {
		printf("�ش� ��¥�� ����� �����ϴ�. %d\n");
	}

	fclose(fp);
}