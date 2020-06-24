#include<stdio.h>


int main() {      //포인터의 값 변경 예제


	int i = 10;
	int* p;

	p = &i;

	printf("i = %d\n",i);
	
	*p = 20;
	printf("i = %d\n", i);

	return 0;
}