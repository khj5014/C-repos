#include "���.h"

//������ ť��
void jcube()
{
	int a, b, c, cubeprice = 0;
	int fees = 3;		//������
	int MVPLevel = get_MVP("");
	system("cls");
	if (MVPLevel == 1) fees = 5;

	printf("\n�� �� ����� �����ü��� �Է����ּ���\n");
	//ȥĮ �Ѱ���
	a = get_int(" ȥ���� Į�� = ");	int asum = a * 5;

	//�ֻ�ް��� �Ѱ���
	b = get_int(" �ֻ�� �����۰��� = ");	int bsum = b * 20;
	
	//ť���� ���� �Ѱ���
	c = get_int(" ť���� ���� = ");	int csum = c * 5;             
	
	//�ְ�� ������ �Ѱ���
	int dsum = 500000;
	
	cubeprice = get_int(" ��ť�ü� = ");


	system("cls");
	printf("\n �� ��Ḷ�� �غ��� �޼�\n");
	printf(" ȥ���� Į��        [ 5  ] �� = [ %5d�� ]�޼�\n", asum / 10000);
	printf(" �ֻ�� ������ ���� [ 20 ] �� = [ %5d�� ]�޼�\n", bsum / 10000);
	printf(" ť����   ����      [ 5  ] �� = [ %5d�� ]�޼�\n", csum / 10000);
	printf(" �ְ�� ������      [ 15 ] �� = [ %5d�� ]�޼�\n", dsum / 10000);

	int e1 = cubeprice - ((cubeprice * fees) / 100);		//��ť �ȶ� ������
	int n = asum + bsum + csum + dsum;	//��ᰪ
	int v = e1 - n;			//�̵�޼�

	printf("\n ��ť�ü� = %d�� �޼�", cubeprice / 10000);
	printf("   ������ = %d�ۼ�Ʈ\n", fees);
	printf("   ���� = %d�� �޼�\n", n / 10000);
	printf("    �̵�  = %d\n", v);

	system("pause");
}
//������ ť��
void Mcube()
{
	int a, b, c, cubeprice = 0;
	int fees = 3;		//������
	int MVPLevel = get_MVP("");
	system("cls");
	if (MVPLevel == 1) fees = 5;

	printf("\n�� �� ����� �����ü��� �Է����ּ���\n");
	//��ȥĮ �Ѱ���
	a = get_int(" ������ ȥ���� Į�� = ");	int asum = a * 5;

	//�ֻ�ް��� �Ѱ���
	b = get_int(" �ֻ�� �����۰��� = ");	int bsum = b * 30;

	//ť���� ���� �Ѱ���
	c = get_int(" ť���� ���� = ");	int csum = c * 10;

	//�ְ�� ������ �Ѱ���
	int dsum = 750000;

	cubeprice = get_int(" ��ť�ü� = ");
	
	
	system("cls");
	printf("\n �� ��Ḷ�� �غ��� �޼�\n");
	printf(" ������ ȥ���� Į�� [ 5  ] �� = [ %5d�� ]�޼�\n", asum / 10000);
	printf(" �ֻ�� ������ ���� [ 20 ] �� = [ %5d�� ]�޼�\n", bsum / 10000);
	printf(" ť����   ����      [ 5  ] �� = [ %5d�� ]�޼�\n", csum / 10000);
	printf(" �ְ�� ������      [ 15 ] �� = [ %5d�� ]�޼�\n", dsum / 10000);
	
	int e1 = cubeprice - ((cubeprice * fees) / 100);		//��ť �ȶ� ������
	int n = asum + bsum + csum + dsum;	//��ᰪ
	int v = e1 - n;			//�̵�޼�

	printf("\n ��ť�ü� = %d�� �޼�", cubeprice / 10000);
	printf("   ������ = %d�ۼ�Ʈ\n",fees);
	printf("   ���� = %d�� �޼�\n", n / 10000);
	printf("    �̵�  = %d\n", v);

	system("pause");
}