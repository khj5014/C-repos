#include <stdio.h>
#define max 5

int main()
{

	int value;
	int loc;
	int n[max] = { 1,2,3,4,5 };

	printf("��ġ��?");
	scanf("%d", &loc);
	printf("������?");
	scanf("%d", &value);
	insult(n, loc, value);
	for (int i = 0; i < max; i++) {
		printf("%d \n", n[i]);
	}



	system("pause");

	return 0;


}
int insult(int n[], int loc, int value) {

	int temp; //�ӽð�
	;//�迭�� 0���� ������ ������ġ loc �� -1  i��ġ�� �и������� ǥ��
	int i = max - 1;
	for (i; loc - 1 < i; i--)
	{
		temp = n[max - 1];
		n[i] = n[i - 1];
		n[i - 1] = temp;
	}
	n[loc - 1] = value;
	return n;