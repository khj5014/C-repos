#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void jcube()
{
	int a, b, d, e = 0;

	printf("\n�� �� ����� �����ü��� �Է����ּ���\n");
	
	printf(" ȥ���� Į�� : ");
	scanf_s("%d", &a);
	int a1 = a * 5;             //ȥĮ
	
	printf(" �ֻ�� �����۰��� = ");
	scanf_s("%d", &b);
	int a2 = b * 20;            //�ֻ�ް���
	
	printf(" ť���� ���� = ");
	scanf_s("%d", &d);
	int a3 = d * 5;             //ť���� ����
	
	int a4 = 500000;			//�ְ�� ������
	
	printf(" ��ť�ü� = ");
	scanf_s("%d", &e);
	
	system("cls");


	printf("/n �� �����\n");
	printf(" ȥ����   Į�� = [ %d�� ]�޼�\n", a1 / 10000);
	printf(" �ֻ��   ���� = [ %d�� ]�޼�\n", a2 / 10000);
	printf(" ť����   ���� = [ %d�� ]�޼�\n", a3 / 10000);
	printf(" �ְ�� ������ = [ %d�� ]�޼�\n", a4 / 10000);
	

	int e1 = e - ((e * 5) / 100);		//��ť �ȶ� ������ 5�ۼ�Ʈ
	
	int n = a1 + a2 + a3 + a4;	//��ᰪ
	int v = n - e1;			//�̵�޼�

	printf("\n ���� = %d\n", n);
	printf("  �̵� = %d\n", v);

	system("pause");
}

void Mcube()
{
	int a, b, d, e = 0;

	printf("\n�� �� ����� �����ü��� �Է����ּ���\n");

	printf(" ������ ȥ���� Į�� : ");
	scanf_s("%d", &a);
	int a1 = a * 5;             //��ȥĮ

	printf(" �ֻ�� �����۰��� = ");
	scanf_s("%d", &b);
	int a2 = b * 30;            //�ֻ�ް���

	printf(" ť���� ���� = ");
	scanf_s("%d", &d);
	int a3 = d * 10;             //ť���� ����

	int a4 = 750000;			//�ְ�� ������

	printf(" ��ť�ü� = ");
	scanf_s("%d", &e);

	system("cls");


	printf("/n �� �����\n");
	printf(" ���� ȥ�� Į�� = [ %d�� ]�޼�\n", a1 / 10000);
	printf(" �ֻ��    ���� = [ %d�� ]�޼�\n", a2 / 10000);
	printf(" ť����    ���� = [ %d�� ]�޼�\n", a3 / 10000);
	printf(" �ְ��  ������ = [ %d�� ]�޼�\n", a4 / 10000);


	int e1 = e - ((e * 5) / 100);		//��ť �ȶ� ������ 5�ۼ�Ʈ

	int n = a1 + a2 + a3 + a4;	//��ᰪ
	int v = n - e1;			//�̵�޼�

	printf("\n ���� = %d\n", n);
	printf("  �̵� = %d\n", v);

	system("pause");
}

int main()
{
	system("mode con cols=60 lines=13");
	system("color e0");
	int x;

	while (1)
	{
	
		printf("\n ť�� ���� (��ť 1 ��ť 2 ���� 3) : ");
	
		
		if (scanf_s("%d", &x) == 0) {
			rewind(stdin);
			printf("\n Error - �߸��� �޴����� \n");
			Sleep(1000);
			system("cls");
		}
		if (x != 1 && x != 2 && x != 3){
			rewind(stdin);
			printf("\n Error - �߸��� �޴����� \n");
			Sleep(1000);
			system("cls");
		}

		switch (x)
		{
		case 1:
			jcube();
			break;
		case 2:
			Mcube();
			break;
		case 3:
			return 0;
		}
	}
	return 0;
}