#include<stdio.h>

int insert()
{
	int array[10];
	int value = 0;
	int items = 0;  //������ ����
	int loc = 0;  //��ġ

	for (int i = items; i > loc; i--)
	{
		array[i + 1] = array[i];
	}
	array[loc] = value;
	items++;


	printf("�������� �Է������ڽð�");
	scanf_s("%d", &value);
	printf("��Ұ����� = %d", items);
	return 0;
}

int main()
{
	insert();
}
