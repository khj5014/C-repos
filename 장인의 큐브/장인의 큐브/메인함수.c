#include "���.h"

//���� �Լ�
int main()
{
	system("mode con cols=30 lines=13");
	system("color e0");
	
	int qpp = 0;
	while (qpp != 3)
	{
		for (int q = 1; q <= 7; q++)
		{
			if (q == 1)printf("  \n\n\t��������");
			if (q == 2)printf("  \n\n\t��������");
			if (q == 3)printf("  \n\n\t��������");
			if (q == 4)printf("  \n\n\t��������");
			if (q == 5)printf("  \n\n\t��������");
			if (q == 6)printf("  \n\n\t��������");
			if (q == 7)printf("  \n\n\t��������");
			Sleep(70);
			system("cls");
		}
		qpp++;
	}
	system("mode con cols=60 lines=13");
	printf(" �ε� �Ϸ� ");
	system("   pause");
	

	while (1)
	{
		int swi = 0, i = 1, clock = 100;
			
		while (i != 11) {

			system("cls");

											printf("\n ������������������������������\n");	
			if (i % 2 == 0)					printf(" �ᢹ  ť�꼱��  ����    ��ť ��    ��ť ��    ���� ��   ��\n");
			else if (i % 2 == 1)			printf(" �ᢺ  ť�꼱��  ����    ��ť ��    ��ť ��    ���� ��   ��\n");			
			for (int te = 0; te < 6; te++)	printf(" ��\t\t   ��\t\t\t\t\t ��\n");
											printf(" ������������������������������\n");

			i++;
			Sleep(clock);
		}
		swi = get_menu(" �޴����ä��� : ");
		system("cls");
		switch (swi)
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
}