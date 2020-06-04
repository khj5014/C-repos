#include "header.h"

//�����Լ�
int main(void)
{
	FILE* fp;
	FILE* fp2;
	int select;   //�޴����� ������

	// ������ �б⾲������ ����. 
	if ((fp = fopen("wallet.txt", "a+")) == NULL) {  //������ ������ ����
		fprintf(stderr, "�Է��� ���� ������ �� �� �����ϴ�");
		exit(1);
	}
	if ((fp2 = fopen("wallet2.txt", "a+")) == NULL) {
		fprintf(stderr, "�Է��� ���� ������ �� �� �����ϴ�");
		exit(1);
	}
	while (1)
	{
		menu();		// �޴��� ǥ���Ѵ�
		printf("   �޴��� �����ϼ���(1~4) ");	// ����ڷκ��� ����(�޴�����)�� �޴´�
		if (scanf_s("%d", &select) == 0) {		//�޴����ý� ���ڸ� �Է��� ��쿡 �����޽��� ���
			system("cls");						//�ܼ�â �����
			printf("   \n�����޽��� - �޴��� �ٽ� ������ �ּ���\n");
			rewind(stdin);
		}
		else if (select != 1 && select != 2 && select != 3 && select != 4) {
			system("cls");			//�޴����ý� 1 ~ 4 �̿��� ���ڸ� �Է��� ��쿡 �����޽��� ���
			printf("   \n�����޽��� - �޴��� �ٽ� ������ �ּ���\n");
		}
		switch (select) {
		case 1:	add_record(fp,fp2); break;	// �����͸� �߰��Ѵ�
		case 2:	all_print(fp2); break;		// ��ü����Ʈ
		case 3:	search_record(fp); break;	// �����͸� Ž���Ѵ�
		case 4:	return 0;					// ����
		}
	}
	fclose(fp);		// ������ �ݴ´�
	fclose(fp2);	// ������ �ݴ´�(�˻���)
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

// ����ü �����͸� ȭ�鿡 ����Ѵ�. 
void print_record(wallet data)
{

	printf("\n ----------�˻� ����---------- \n");
	printf("  ��¥: %s\n", data.date);
	printf("  ����: %s\n", data.income);
	printf("  ����: %s\n", data.expense);
	printf("  �ܾ�: %s\n", data.carmoney);
	printf("  ����: %s\n", data.contents);
	printf("  ----------------------------- ");
	printf("\n\n ");
}

wallet get_record()
{
	wallet data;

	getchar();		// ����ڷκ��� �����͸� �޾Ƽ� ����ü�� ����
	printf("\n  ��¥: "); gets_s(data.date, SIZE);			// ��¥�� �Է¹޴´�
	printf("  ����: ");	gets_s(data.income, SIZE);			// ���Ը� �Է¹޴´�
	printf("  ����: ");	gets_s(data.expense, SIZE);			// ���⸦ �Է¹޴´�
	/*	data.carmoney = (data.income - data.expense);			// �ܾ� ���	*/
	printf("  ����: ");	gets_s(data.contents, SIZE);		// ������ �Է¹޴´�


	return data;
}