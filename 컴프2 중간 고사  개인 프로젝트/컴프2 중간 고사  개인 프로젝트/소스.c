#include "header.h"

//�����Լ�
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
			case 2:	all_print(fp); break;		// ��ü����Ʈ
			case 3:	search_record(fp); break;	// �����͸� Ž���Ѵ�
			case 4:	return 0;					//����
			}
	}
	
	fclose(fp);	// ������ �ݴ´�
	return 0;
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

// ������ �߰��� ����ü�Լ�
wallet get_record()
{
	wallet data;
	getchar();
	printf("\n  ��¥: "); gets_s(data.date, SIZE);		// ��¥�� �Է¹޴´�
	printf("  ����: ");	gets_s(data.income, SIZE);		// ���Ը� �Է¹޴´�
	int car = 0;
	car = (data.income) - (data.expense);				//�ܾװ��
	gets_s(data.carmoney = car,SIZE);
	printf("  ����: ");	gets_s(data.expense, SIZE);		// ���⸦ �Է¹޴´�
	printf("  ����: ");	gets_s(data.Contents, SIZE);	// ������ �Է¹޴´�
	return data;
}

// ����ü �����͸� ȭ�鿡 ����Ѵ�. 
void print_record(wallet data)
{

	printf("\n  ----------�˻� ����---------- \n");
	printf("  ��¥: %s\n", data.date);
	printf("  ����: %s\n", data.income);
	printf("  ����: %s\n", data.expense);
	printf("  �ܾ�: %s\n", data.carmoney);
	printf("  ����: %s\n", data.Contents);
	printf("  ----------------------------- ");
	printf("\n\n ");
}