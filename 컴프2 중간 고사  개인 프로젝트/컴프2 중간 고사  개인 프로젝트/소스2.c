#include "header.h"

wallet get_record()
{
	wallet data;

	int x, y;

	getchar();		// ����ڷκ��� �����͸� �޾Ƽ� ����ü�� ����
	printf("  �� "); scanf("\n %d", &data.month);	rewind(stdin);	// ���� �Է¹޴´�
	printf("  �� "); scanf(" %d", &data.day);	rewind(stdin);	// �ϸ� �Է¹޴´�
	printf("  ����: ");	scanf("%d", &x);	rewind(stdin);	// ���Ը� �Է¹޴´�
	printf("  ����: "); scanf("%d", &y);	rewind(stdin);	// ���⸦ �Է¹޴´�


	data.khj.income = x;
	data.khj.expense = y;
	data.khj.carmoney = (x-y);			//���� = �ܾ�( �ܾ��� - �� ���� �ش� ��¥�� ���Ժ��� ������ �� ������ �ǹ� )
	printf("  ����: ");	gets_s(data.khj.contents, SIZE);			// ������ �Է¹޴´�
	
	return data;
}

// �����͸� �߰��Ѵ�  (�޴� 1)
void add_record(FILE* fp, FILE* fp2)
{
	wallet data;

	// ����ü �����͸� ���Ͽ� ����(�˻���)
	data = get_record();				// �����͸� �޾Ƽ� ����ü�� ����
	fseek(fp, 0, SEEK_END);				// ������ ������ ����	
	fwrite(&data, 1, sizeof(data), fp);	//����
	
	// ����ü �����͸� ���Ͽ� ����(��¿�)								
fprintf(fp2,"\n   %d��  %d��     %d            %d          %d            %s"
		,data.month,data.day,data.khj.income,data.khj.expense,data.khj.carmoney,data.khj.contents);
}


//�Էµ� ��� ��¥�� ��ϵ� ���� ����Լ� (�޴� 2)
void all_print(FILE* fp2)
{
	system("cls");
	char buf[SIZE] = { NULL };

	while (!feof(fp2))
	{
		fgets(buf, SIZE, fp2);
		printf("%s", buf);
	}
	printf("\n\n\n\n");
}

// ��¥�� Ž���Ѵ�    (�޴� 3)
void search_record(FILE* fp)
{
	system("cls");
	wallet data;
	char seach[SIZE];
	
	fseek(fp, 0, SEEK_SET);			// ������ ó������ ����
	getchar();
	printf(" \n �˻��Ͻ� ��¥�� �Է����ּ���\n");
	printf(" ��  ");
	gets_s(seach, SIZE);					// ��¥�� �Է¹޴´�
	while (!feof(fp)) {					// ������ ������ �ݺ��Ѵ�
		fread(&data, sizeof(data), 1, fp);
		if (strcmp(data.month && data.day, seach) == 0) {		// ��¥�� ���Ѵ�
			print_record(data);
			break;
		}
		else
			printf("�Է��Ͻ� ��¥�� ���� ������ �����ϴ�.");
			printf("�޴��� ���ư��ϴ�.\n\n\n\n");
	}
}