#include "헤더.h"

//장인의 큐브
void jcube()
{
	int a, b, c, cubeprice = 0;
	int fees = 3;		//수수료
	int MVPLevel = get_MVP("");
	system("cls");
	if (MVPLevel == 1) fees = 5;

	printf("\n※ 각 재료의 경매장시세를 입력해주세요\n");
	//혼칼 총가격
	a = get_int(" 혼돈의 칼날 = ");	int asum = a * 5;

	//최상급결정 총가격
	b = get_int(" 최상급 아이템결정 = ");	int bsum = b * 20;
	
	//큐브의 파편 총가격
	c = get_int(" 큐브의 파편 = ");	int csum = c * 5;             
	
	//최고급 연마제 총가격
	int dsum = 500000;
	
	cubeprice = get_int(" 장큐시세 = ");


	system("cls");
	printf("\n 각 재료마다 준비할 메소\n");
	printf(" 혼돈의 칼날        [ 5  ] 개 = [ %5d만 ]메소\n", asum / 10000);
	printf(" 최상급 아이템 결정 [ 20 ] 개 = [ %5d만 ]메소\n", bsum / 10000);
	printf(" 큐브의   파편      [ 5  ] 개 = [ %5d만 ]메소\n", csum / 10000);
	printf(" 최고급 연마제      [ 15 ] 개 = [ %5d만 ]메소\n", dsum / 10000);

	int e1 = cubeprice - ((cubeprice * fees) / 100);		//장큐 팔때 수수료
	int n = asum + bsum + csum + dsum;	//재료값
	int v = e1 - n;			//이득메소

	printf("\n 장큐시세 = %d만 메소", cubeprice / 10000);
	printf("   수수료 = %d퍼센트\n", fees);
	printf("   재료비 = %d만 메소\n", n / 10000);
	printf("    이득  = %d\n", v);

	system("pause");
}
//명장의 큐브
void Mcube()
{
	int a, b, c, cubeprice = 0;
	int fees = 3;		//수수료
	int MVPLevel = get_MVP("");
	system("cls");
	if (MVPLevel == 1) fees = 5;

	printf("\n※ 각 재료의 경매장시세를 입력해주세요\n");
	//강혼칼 총가격
	a = get_int(" 강력한 혼돈의 칼날 = ");	int asum = a * 5;

	//최상급결정 총가격
	b = get_int(" 최상급 아이템결정 = ");	int bsum = b * 30;

	//큐브의 파편 총가격
	c = get_int(" 큐브의 파편 = ");	int csum = c * 10;

	//최고급 연마제 총가격
	int dsum = 750000;

	cubeprice = get_int(" 명큐시세 = ");
	
	
	system("cls");
	printf("\n 각 재료마다 준비할 메소\n");
	printf(" 강력한 혼돈의 칼날 [ 5  ] 개 = [ %5d만 ]메소\n", asum / 10000);
	printf(" 최상급 아이템 결정 [ 20 ] 개 = [ %5d만 ]메소\n", bsum / 10000);
	printf(" 큐브의   파편      [ 5  ] 개 = [ %5d만 ]메소\n", csum / 10000);
	printf(" 최고급 연마제      [ 15 ] 개 = [ %5d만 ]메소\n", dsum / 10000);
	
	int e1 = cubeprice - ((cubeprice * fees) / 100);		//장큐 팔때 수수료
	int n = asum + bsum + csum + dsum;	//재료값
	int v = e1 - n;			//이득메소

	printf("\n 명큐시세 = %d만 메소", cubeprice / 10000);
	printf("   수수료 = %d퍼센트\n",fees);
	printf("   재료비 = %d만 메소\n", n / 10000);
	printf("    이득  = %d\n", v);

	system("pause");
}