#include <stdio.h>
//배열로된 문자열을 복사하여 출력하기
int main(void)
{
	char src[] = "The worst things to eat before you sleep";
	char dst[100];
	
	int i;
	printf("원본 문자열=%s\n", src);
	
	for(i=0 ; src[i] != '\0' ; i++)	dst[i] = src[i];
	
	dst[i] = '\0';
	printf("복사된 문자열=%s\n", dst);

	return 0;
}