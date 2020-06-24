#include<stdio.h>


int main(void) {

	int i = 3000;
	int* p = NULL;  //포인터선언

	p = &i;    // i의 주소값을 p에 대입

	printf("i=%d\n\n", i);		//p가 가르키는 주소에서 데이터출력
	printf("&i=%u\n\n", &i);

	printf("p=%u\n\n", p);		//포인터를 사용하여 출력
	printf("*p=%u\n\n", *p);



	return 0;
}