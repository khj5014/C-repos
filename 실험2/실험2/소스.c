#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 5

void insult(int array[], int loc, int value) {

	int temp; //�ӽð�
	;//�迭�� 0���� ������ ������ġ loc �� -1  i��ġ�� �и������� ǥ��
	int i = max - 1;
	for (; loc - 1 < i; i--)
	{
		temp = array[max - 1];
		array[i] = array[i - 1];
		array[i - 1] = temp;
	}
	array[loc - 1] = value;
}

int main()
{
	int value;
	int loc;
	int array[max] = { 1,2,3,4,5 };

	printf("��ġ��?(�ִ밪 5)");
	scanf("%d", &loc);
	printf("������?");
	scanf("%d", &value);
	
	insult(array, loc, value);
	
	for (int i = 0; i < max; i++) {
		printf("%d \n", array[i]);
	}
	system("pause");

	return 0;
}
