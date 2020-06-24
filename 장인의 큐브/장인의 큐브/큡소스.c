#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main()
{
	system("color f0");
	int a, b, c, d, e = 0;

	printf("혼돈의 칼날 가격 = ");
	scanf_s("%d", &a);
	printf("최상급 아이템결정 = ");
	scanf_s("%d", &b);
	printf("최고급 연마제 갯수 ");
	scanf_s("%d", &c);
	printf("큐브의 파편 = ");
	scanf_s("%d", &d);
	printf("장큐시세 = ");
	scanf_s("%d", &e);

	int a1 = a * 5;              //혼칼
	int b1 = b * 20;             //최상급결정
	int c1 = c * 50000;          //최고급 연마제
	int d1 = d * 5;              //큐브의 파편
	int e1 = e * 3;				 //수수료 3퍼센트
	int n = a1 + b1 + c1 + d1;       //재료값
	int v = e - n - e1 / 100;    //이득메소

	printf("재료비 = %d", n);
	printf("   이득 = %d", v);


	system("pause");

	return 0;
}