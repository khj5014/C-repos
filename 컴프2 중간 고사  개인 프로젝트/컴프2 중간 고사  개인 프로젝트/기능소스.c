#include "header.h"

wallet data = { NULL };

void get_record()
{
	system("cls");
	wallet *temp = malloc(sizeof(wallet));

	int x, y;

	getchar();		// ����ڷκ��� �����͸� �޾Ƽ� ����ü�� ����

	temp->month = get_month("\n  '��'��  �Է����ּ���  ");
	temp->day = get_day("  '��'��  �Է����ּ���  ");
	x = temp->income = get_int("  '����'�� ���ΰ���?  ");
	y = temp->expense = get_int("  '����'�� ���ΰ���?  ");
	printf("  ����or���⿡ ���� ������ �����ּ��� ");	gets_s(temp->contents, SIZE);	 // ������ �Է¹޴´�
	temp->carmoney = (x - y);		//���� = �ܾ�( �ܾ��� - �� ���� �ش� ��¥�� ���Ժ��� ������ �� ������ �ǹ� )

	data = *temp;
}

// �����͸� �߰��Ѵ�  (�޴� 2)
void add_record(FILE* fp, FILE* fp2)
{
	// ����1,2�� �б⾲������ ����. 
	fp = fopen("wallet.dat", "a+");		//����������
	fp2 = fopen("wallet2.txt", "a+");	//��¿�

	// ����ü �����͸� ���Ͽ� ����(�˻���)
	get_record();						// �����͸� �޾Ƽ� ����ü�� ����
	fseek(fp, 0, SEEK_END);				// ������ ������ ����	
	fwrite(&data, 1, sizeof(data), fp);	// ����
	
	// ����ü �����͸� ���Ͽ� ����(��¿�)								
	fprintf(fp2, "\n�� %d��  %d��   %d         %d           %d         %s"
		, data.month, data.day, data.income, data.expense, data.carmoney, data.contents);

	printf("\n �Է��� �Ϸ�Ǿ����ϴ�. �Էµ� ������ Ȯ���Ͻ÷��� 3���޴��� �̿����ּ���\n");
	fclose(fp);
	fclose(fp2);
	system("pause");
}

//�Էµ� ��� ��¥�� ��ϵ� ���� ����Լ� (�޴� 3)
void all_print(FILE* fp2)
{
	fp2 = fopen("wallet2.txt", "r");	//����2 �б��� ����

	system("cls");
	char buf[SIZE] = { 0 };

	while (!feof(fp2))
	{
		fgets(buf, SIZE, fp2);
		printf("%s", buf);
	}
	printf("\n\n\n\n");

	fclose(fp2);		//���� �ݱ�
	printf(" �޴��� ���ư��÷���.  ");
	system("pause");
}

// ��¥�� Ž���Ѵ�    (�޴� 4)
int search_record(FILE* fp)
{
	system("cls");

	if ((fp = fopen("wallet.dat", "r")) == NULL)		//���� �б��� ����
	{
		printf("\n\n �� �����޽��� - ����Ʈ�� �ƹ��͵� �������� �ʽ��ϴ�.\n   ");
		system("pause");
		return 0;
	}

	int i = 0;		//�� ��
	int j = 0;		//�� ��
	int pos = 0;

	getchar();
	printf(" \n �˻��Ͻ� ��¥�� �Է����ּ���\n");// ��¥�� �Է¹޴´�

	i = get_month(" '��'�� ��  ");
	j = get_day(" '��'�� ��  ");

	fseek(fp, 0, SEEK_SET);			// ������ ó������ ����

	while (!feof(fp))	//������ ������ �ݺ��Ѵ�
	{
		fread(&data, sizeof(data), 1, fp);

		if ((data.month == i) && (data.day == j))
		{
			pos++;
			print_record(data); break;
		}
	}
	if (pos == 0) { printf("\n �� �����޽��� - �˻��Ͻ� ��¥�� ���� ������ �����ϴ�.\n\n"); }

	fclose(fp);
	system("pause");
}