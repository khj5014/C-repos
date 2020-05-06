#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 5

void insult(int array[], int loc, int value) {

	int temp; //임시값
	;//배열은 0부터 셈으로 지정위치 loc 에 -1  i위치는 밀리는지점 표시
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

	printf("위치값?(최대값 5)");
	scanf("%d", &loc);
	printf("넣을값?");
	scanf("%d", &value);
	
	insult(array, loc, value);
	
	for (int i = 0; i < max; i++) {
		printf("%d \n", array[i]);
	}
	system("pause");

	return 0;
}
