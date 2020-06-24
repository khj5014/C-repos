#include "header.h"

//일 받기
int get_day(char* text) {
	int temp = get_int(text);
	if (temp >= 1 && temp <= 31) {

		return temp;
	}
	printf("  ♠ 오류메시지 - [ 1 ~ 31 ]사이의 숫자를 입력해주세요\n");
	return get_day(text);
}
//월 받기
int get_month(char* text) {
	int temp = get_int(text);
	if (temp >= 1 && temp <= 12) {

		return temp;
	}
	printf(" ♠ 오류메시지 - [ 1 ~ 12 ]사이의 숫자를 입력해주세요\n");
	return get_month(text);
}

//정수입력받기
int get_int(char* text) {
	printf("%s", text);
	int temp = 0;

	if (!scanf("%d", &temp)) {
		rewind(stdin);
		return get_int(text);
	}
	rewind(stdin);
	return temp;
}