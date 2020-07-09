#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void jcube()
{
	int a, b, d, e = 0;

	printf("\n※ 각 재료의 경매장시세를 입력해주세요\n");
	
	printf(" 혼돈의 칼날 : ");
	scanf_s("%d", &a);
	int a1 = a * 5;             //혼칼
	
	printf(" 최상급 아이템결정 = ");
	scanf_s("%d", &b);
	int a2 = b * 20;            //최상급결정
	
	printf(" 큐브의 파편 = ");
	scanf_s("%d", &d);
	int a3 = d * 5;             //큐브의 파편
	
	int a4 = 500000;			//최고급 연마제
	
	printf(" 장큐시세 = ");
	scanf_s("%d", &e);
	
	system("cls");


	printf("/n 각 재료비용\n");
	printf(" 혼돈의   칼날 = [ %d만 ]메소\n", a1 / 10000);
	printf(" 최상급   결정 = [ %d만 ]메소\n", a2 / 10000);
	printf(" 큐브의   파편 = [ %d만 ]메소\n", a3 / 10000);
	printf(" 최고급 연마제 = [ %d만 ]메소\n", a4 / 10000);
	

	int e1 = e - ((e * 5) / 100);		//장큐 팔때 수수료 5퍼센트
	
	int n = a1 + a2 + a3 + a4;	//재료값
	int v = n - e1;			//이득메소

	printf("\n 재료비 = %d\n", n);
	printf("  이득 = %d\n", v);

	system("pause");
}

void Mcube()
{
	int a, b, d, e = 0;

	printf("\n※ 각 재료의 경매장시세를 입력해주세요\n");

	printf(" 강력한 혼돈의 칼날 : ");
	scanf_s("%d", &a);
	int a1 = a * 5;             //강혼칼

	printf(" 최상급 아이템결정 = ");
	scanf_s("%d", &b);
	int a2 = b * 30;            //최상급결정

	printf(" 큐브의 파편 = ");
	scanf_s("%d", &d);
	int a3 = d * 10;             //큐브의 파편

	int a4 = 750000;			//최고급 연마제

	printf(" 장큐시세 = ");
	scanf_s("%d", &e);

	system("cls");


	printf("/n 각 재료비용\n");
	printf(" 강력 혼돈 칼날 = [ %d만 ]메소\n", a1 / 10000);
	printf(" 최상급    결정 = [ %d만 ]메소\n", a2 / 10000);
	printf(" 큐브의    파편 = [ %d만 ]메소\n", a3 / 10000);
	printf(" 최고급  연마제 = [ %d만 ]메소\n", a4 / 10000);


	int e1 = e - ((e * 5) / 100);		//장큐 팔때 수수료 5퍼센트

	int n = a1 + a2 + a3 + a4;	//재료값
	int v = n - e1;			//이득메소

	printf("\n 재료비 = %d\n", n);
	printf("  이득 = %d\n", v);

	system("pause");
}

int main()
{
	system("mode con cols=60 lines=13");
	system("color e0");
	int x;

	while (1)
	{
	
		printf("\n 큐브 선택 (장큐 1 명큐 2 종료 3) : ");
	
		
		if (scanf_s("%d", &x) == 0) {
			rewind(stdin);
			printf("\n Error - 잘못된 메뉴선택 \n");
			Sleep(1000);
			system("cls");
		}
		if (x != 1 && x != 2 && x != 3){
			rewind(stdin);
			printf("\n Error - 잘못된 메뉴선택 \n");
			Sleep(1000);
			system("cls");
		}

		switch (x)
		{
		case 1:
			jcube();
			break;
		case 2:
			Mcube();
			break;
		case 3:
			return 0;
		}
	}
	return 0;
}