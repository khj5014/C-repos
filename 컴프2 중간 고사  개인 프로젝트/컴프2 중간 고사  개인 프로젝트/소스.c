#include "header.h"

//�����Լ�
int main(void)
{
	FILE* fp;
	FILE* fp2;
	int select;   //�޴����� ������

	if ((fp2 = fopen("wallet2.txt", "r")) == NULL)		//�������� ������ ù��°�ٿ� �� ����
	{
		fp2 = fopen("wallet2.txt", "a+");
		fprintf(fp2, "��   ��¥   ��    ����    ��    ����    ��    ����    ��            ����            ��");
		fclose(fp2);
	}

	// ����1,2�� �б⾲������ ����. 
	fp = fopen("wallet.dat", "a+");		//����������
	fp2 = fopen("wallet2.txt", "a+");	//��¿�
	while (1)
	{
		menu();		// �޴��� ǥ���Ѵ�
		printf("   �޴��� �����ϼ���(1~5) ");	// ����ڷκ��� ����(�޴�����)�� �޴´�
		if (scanf_s("%d", &select) == 0) 		//�޴����ý� ���ڸ� �Է��� ��쿡 �����޽��� ���
			{
				system("cls");						//�ܼ�â �����
				printf("   \n�����޽��� - �޴��� �ٽ� ������ �ּ���\n");
				rewind(stdin);
			}	//�޴����ý� 1 ~ 4 �̿��� ���ڸ� �Է��� ��쿡 �����޽��� ���
		if (select != 1 && select != 2 && select != 3 && select != 4 && select != 5) 
			{
				system("cls");						//�ܼ�â �����
				printf("   \n�����޽��� - �޴��� �ٽ� ������ �ּ���\n");
				rewind(stdin);
			}
		//�޴�����
		switch (select) {
			case 1:	manual(); break;				//����� �޴���
			case 2:	add_record(fp, fp2); break;	// �����͸� �߰��Ѵ�
			case 3:	all_print(fp2); break;		// ��ü����Ʈ
			case 4:	search_record(fp); break;	// �����͸� Ž���Ѵ�
			case 5:	return 0;
		}
	}
		fclose(fp);		// ������ �ݴ´�(�˻���)
		fclose(fp2);	// ������ �ݴ´�(��¿�)
		return 0;
	
}

// �޴��� ȭ�鿡 ǥ���ϴ� �Լ�
	void menu()
{
	printf("\n");
	printf("  ��� $ ���� ������ $  ���\n");
	printf("  �� �� �� �Ŵ���         ��\n");
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
	printf("  ��¥: %d�� %d��\n", data.month, data.day);
	printf("  ����: %d\n", data.khj.income);
	printf("  ����: %d\n", data.khj.expense);
	printf("  �ܾ�: %d\n", data.khj.carmoney);
	printf("  ����: %s\n", data.khj.contents);
	printf("  ----------------------------- ");
	printf("\n\n ");
}

void manual()
{
	system("cls");
	printf("\n  ����� �Ŵ���");

}