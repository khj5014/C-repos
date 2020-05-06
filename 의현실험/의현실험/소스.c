#include <stdio.h>
#define n 10

void insert(int array[n], int loc, int value) {
	
	int i = n - 1;
	int template;
	
	for (; loc - 1 < i; i--)
	{
		template = array[i];
		array[i] = array[i - 1];
		array[i - 1] = template;
	}
	array[loc - 1] = value;
}

int main() {
	int array[n] = {1,2,3,4,5};
	int loc;
	int value;

	printf("몇 번째?");
	scanf_s("%d", &loc);
	printf("어떤 값?");
	scanf_s("%d", &value);

	insert(array, loc, value);

	for (int i = 0; i < n; i++)
	{
		printf("%d\n", array[i]);

	}
}