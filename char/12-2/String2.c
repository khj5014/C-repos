#include<stdio.h>
//문자열 출력 방식2
int main()
{
	char str1[6] = "Seoul";
	char str2[3] = { 'i', 's', '\0' };
	char str3[] = ("the capital city of Korea");
	
	printf("%s,%s,%s,\n", str1, str2, str3);

	return 0;
}