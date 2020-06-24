#include <stdio.h>
//포인터 변수로 문자열 출력하기
int main(void)
{
	char *p = "HelloWorld";
	printf("%s \n", p);

	p = "Welcome to C World!";
	printf("%s \n", p);

	char q[] = "Goodbye";
	printf("%s \n", q);

	q[0] = 'a';		
	printf("%s \n", q);

	return 0;
}