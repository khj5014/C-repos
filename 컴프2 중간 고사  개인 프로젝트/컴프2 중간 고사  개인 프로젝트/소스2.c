#include "header.h"




//�Էµ� ��� ��¥�� ��ϵ� ���� ����Լ�
void all_print(FILE* fp)
{
	char buffer[25];
	
	if ((fp = fopen("wallet.txt", "r") == NULL))
	{
		fprintf(stderr, " \n������ �����ϴ�.\n", "wallet.txt");
	}
	else

	fgets(buffer, sizeof(buffer),fp);
	printf("%s\n", buffer);
	
	fclose(fp);
	printf("\n");
}

//�ܾװ�� �Լ�
void money(FILE* fp)
{


}

