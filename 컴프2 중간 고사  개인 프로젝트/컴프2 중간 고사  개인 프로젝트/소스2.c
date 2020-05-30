#include "header.h"




//입력된 모든 날짜에 등록된 정보 출력함수
void all_print(FILE* fp)
{
	char buffer[25];
	
	if ((fp = fopen("wallet.txt", "r") == NULL))
	{
		fprintf(stderr, " \n파일이 없습니다.\n", "wallet.txt");
	}
	else

	fgets(buffer, sizeof(buffer),fp);
	printf("%s\n", buffer);
	
	fclose(fp);
	printf("\n");
}

//잔액계산 함수
void money(FILE* fp)
{


}

