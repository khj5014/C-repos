#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main()
{
	system("color f0");
	int a, b, c, d, e = 0;

	printf("ȥ���� Į�� ���� = ");
	scanf_s("%d", &a);
	printf("�ֻ�� �����۰��� = ");
	scanf_s("%d", &b);
	printf("�ְ�� ������ ���� ");
	scanf_s("%d", &c);
	printf("ť���� ���� = ");
	scanf_s("%d", &d);
	printf("��ť�ü� = ");
	scanf_s("%d", &e);

	int a1 = a * 5;              //ȥĮ
	int b1 = b * 20;             //�ֻ�ް���
	int c1 = c * 50000;          //�ְ�� ������
	int d1 = d * 5;              //ť���� ����
	int e1 = e * 3;				 //������ 3�ۼ�Ʈ
	int n = a1 + b1 + c1 + d1;       //��ᰪ
	int v = e - n - e1 / 100;    //�̵�޼�

	printf("���� = %d", n);
	printf("   �̵� = %d", v);


	system("pause");

	return 0;
}