#include "header.h"

//�����Լ�
int main(void)
{
	int k;
	system("color f3");
	int select;   //�޴����� ������
	if ((fp2 = fopen("wallet2.txt", "r")) == NULL)		//�������� ������ ù��°�ٿ� �� ����
	{
		fp2 = fopen("wallet2.txt", "a+");
		fprintf(fp2, " _____________________________________________________________________________________\n");
		fprintf(fp2, "��   ��¥   ��    ����    ��    ����    ��    ����    ��               ����               ��");
		fclose(fp2);
	}
	while (1)
	{
		system("cls");
		menu();		// �޴��� ǥ���Ѵ�

		printf("\n\n     �޴��� �����ϼ���(1~5) ");	// ����ڷκ��� ����(�޴�����)�� �޴´�

		if (scanf("%d", &select) == 0) 		//�޴����ý� ���ڸ� �Է��� ��쿡 �����޽��� ���
		{
			err_err();
		}					//�޴����ý� 1 ~ 4 �̿��� ���ڸ� �Է��� ��쿡 �����޽��� ���
		if (select != 1 && select != 2 && select != 3 && select != 4 && select != 5)
		{
			err_err();
		}
		//�޴�����
		switch (select) {
		case 1: manual();  break;		//����� �޴���	
		case 2:	add_record(fp, fp2); break;	// �����͸� �߰��Ѵ�
		case 3:	all_print(fp2); break;		// ��ü����Ʈ
		case 4:	search_record(fp); break;	// �����͸� Ž���Ѵ�
		case 5:	system("cls");
			printf("\n\n   �ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�\n");
			printf("   ��  ���� �������� �����մϴ�. ��\n");
			printf("   �ڡڡڡڡڡڡڡڡڡڡڡڡڡڡڡ�\n"); return 0;
		}
	}
	return 0;
}