#include<stdio.h>

int insert()
{
	int array[10];
	int value = 0;
	int items = 0;  //원소의 개수
	int loc = 0;  //위치

	for (int i = items; i > loc; i--)
	{
		array[i + 1] = array[i];
	}
	array[loc] = value;
	items++;


	printf("넣을값을 입력해이자시가");
	scanf_s("%d", &value);
	printf("요소갯수는 = %d", items);
	return 0;
}

int main()
{
	insert();
}
