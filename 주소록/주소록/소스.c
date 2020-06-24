#include <stdio.h>
#include <string.h>
#include <windows.h>
#define SIZE 100

typedef struct person {			// ����ó�� ����ü�� ǥ���Ѵ�. 
	char name[SIZE];			// �̸�
	char address[SIZE];			// �ּ� 
	char mobilephone[SIZE];		// �޴���
	char desc[SIZE];			// Ư¡
} PERSON;

void menu();
PERSON get_record();
void print_record(PERSON data);
void add_record(FILE* fp);
void search_record(FILE* fp);

int main(void)
{
	FILE *fp;
	int select;
	// ���� ������ �߰� ���� �����Ѵ�. 
	if ((fp = fopen("address.dat", "a+")) == NULL) {
		fprintf(stderr, "�Է��� ���� ������ �� �� �����ϴ�");
			exit(1);
	}
	while (1) {
		menu();								// �޴��� ǥ���Ѵ�
		printf("�������� �Է��Ͻÿ�: ");	// ����ڷκ��� ������ �޴´�
		scanf("%d", &select);
		switch (select) {
		case 1:	add_record(fp); break;		// �����͸� �߰��Ѵ�
		case 2:	search_record(fp); break;	// �����͸� Ž���Ѵ�
		case 3:	return 0;
		}
	}
	fclose(fp);	// ���� ������ �ݴ´�
	return 0;
}
						
PERSON get_record()
{
	PERSON data;
	getchar();
	printf("�̸�: "); 	gets_s(data.name, SIZE);	// �̸��� �Է¹޴´�
	printf("�ּ�: ");		gets_s(data.address, SIZE);	// �ּҸ� �Է¹޴´�
	printf("�޴���: ");	gets_s(data.mobilephone, SIZE);	// �޴��� ��ȣ�� �Է¹޴´�
	printf("Ư¡: ");		gets_s(data.desc, SIZE);	// Ư¡�� �Է� �޴´�
		return data;
}

// ����ü �����͸� ȭ�鿡 ����Ѵ�. 
void print_record(PERSON data)
{
	printf("�̸�: %s\n", data.name);		
	printf("�ּ�: %s\n", data.address);
	printf("�޴���: %s\n", data.mobilephone);	
	printf("Ư¡: %s\n", data.desc);
}
// �޴��� ȭ�鿡 ǥ���ϴ� �Լ�
void menu()
{
	printf("====================\n");
	printf(" 1. �߰�\n 2. �˻�\n 3. ����\n");
	printf("====================\n");
}

// �����͸� �߰��Ѵ�
void add_record(FILE* fp)
{
	PERSON data;
	data = get_record();	// ����ڷκ��� �����͸� �޾Ƽ� ����ü�� ����
	fseek(fp, 0, SEEK_END);	// ������ ������ ����	
	fwrite(&data, sizeof(data), 1, fp);	// ����ü �����͸� ���Ͽ� ����
}
// �����͸� Ž���Ѵ�
void search_record(FILE *fp)
{
	char name[SIZE];
	PERSON data;
	fseek(fp, 0, SEEK_SET);	// ������ ó������ ����
	getchar();
	printf("Ž���ϰ��� �ϴ� ����� �̸�\n");
	gets_s(name, SIZE);		// �̸��� �Է¹޴´�
	while (!feof(fp)) {		// ������ ������ �ݺ��Ѵ�
		fread(&data, sizeof(data), 1, fp); 		
		if (strcmp(data.name, name) == 0) {	// �̸��� ���Ѵ�
			print_record(data);
			break;
		}
	}
}