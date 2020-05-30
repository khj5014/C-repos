#include "header.h"

int main(void)
{
	FILE* fp;
	int select;   //�޴����� ������
	// ���� ������ �߰� ���� �����Ѵ�. 
	if ((fp = fopen("wallet.txt", "a+")) == NULL) {  //�����Ͱ� ������ ����
		fprintf(stderr, "�Է��� ���� ������ �� �� �����ϴ�");
		exit(1);
	}
	while (1)
	{
		menu();								// �޴��� ǥ���Ѵ�
		printf("   �޴��� �����ϼ���(1~4) ");	// ����ڷκ��� ����(�޴�����)�� �޴´�
		if (scanf_s("%d", &select) == 0) {
			system("cls");
			printf("   \n�����޽��� - �޴��� �ٽ� ������ �ּ���\n");
			rewind(stdin);
		}
		else if (select != 1 && select != 2 && select != 3 && select != 4) {
			system("cls");
			printf("   \n�����޽��� - �޴��� �ٽ� ������ �ּ���\n");
		}
			switch (select) {
			case 1:	add_record(fp); break;		// �����͸� �߰��Ѵ�
			case 2:	all_print(fp); break;			// �ܾװ���
			case 3:	search_record(fp); break;	// �����͸� Ž���Ѵ�
			case 4:	return 0;
			}
	}
	
	fclose(fp);	// ���� ������ �ݴ´�
	return 0;
}

// ����ü�Լ�
wallet get_record()
{
	wallet data;
	getchar();
	printf("\n  ��¥: "); 	gets_s(data.date, SIZE);	// ��¥�� �Է¹޴´�
	printf("  ����: ");	gets_s(data.income, SIZE);		// ���Ը� �Է¹޴´�
	printf("  ����: ");	gets_s(data.expense, SIZE);		// ���⸦ �Է¹޴´�
	printf("  ����: ");	gets_s(data.Contents, SIZE);	// ������ �Է¹޴´�
	return data;
}

// �����͸� �߰��Ѵ�
void add_record(FILE* fp)
{
	wallet data;
	data = get_record();	// ����ڷκ��� �����͸� �޾Ƽ� ����ü�� ����
	fseek(fp, 0, SEEK_END);	// ������ ������ ����	
	fwrite(&data, sizeof(data), 1, fp);	// ����ü �����͸� ���Ͽ� ����
}


// ����ü �����͸� ȭ�鿡 ����Ѵ�. 
void print_record(wallet data)
{
	FILE* fp = NULL;
	
	printf("\n  ----------�˻� ����---------- \n");
	printf("  ��¥: %s\n", data.date);
	printf("  ����: %s\n", data.income);
	printf("  ����: %s\n", data.expense);
	printf("  ����: %s\n", data.Contents);
	printf("  �ܾ�: %s��\n", data.money);
	printf("  ----------------------------- ");
	printf("\n\n ");
}

// �޴��� ȭ�鿡 ǥ���ϴ� �Լ�
void menu()
{
	printf("\n");
	printf("  ��� $ ���� ������ $  ���\n");
	printf("  �� �� �� �߰��ϱ�       ��\n");
	printf("  �� �� �� ��ü����Ʈ     ��\n");
	printf("  �� �� �� ��¥�� �˻�    ��\n");
	printf("  �� �� �� ����           ��\n");
	printf("  ��������������\n");
}

// �����͸� Ž���Ѵ�

void search_record(FILE* fp)
{
	char date[SIZE];
	wallet data;
	fseek(fp, 0, SEEK_SET);	// ������ ó������ ����
	getchar();
	//����ġ�� �߰�����
	printf("\n  Ž���ϰ��� �ϴ� ��¥ : ");
	gets_s(date, SIZE);		// �̸��� �Է¹޴´�
	while (!feof(fp)) {		// ������ ������ �ݺ��Ѵ�
		fread(&data, sizeof(data), 1, fp);
		if (strcmp(data.date, date) == 0) {	// �̸��� ���Ѵ�
			print_record(data);
			break;
		}
	}
}