#include "헤더.h"

//정수입력받기
int get_int(char* text) {
	printf("%s", text);
	int temp = 0;

	if (!scanf("%d", &temp)) {
		printf(" ♠ 오류메시지 - 숫자를 입력해주세요\n");
		Sleep(2000);
		system("cls");
		rewind(stdin);
		return get_int(text);
	}
	rewind(stdin);
	return temp;
}
//메뉴 받기
//메뉴 받기
int get_menu(char* text) {
	int temp = get_int(text);
	if (temp >= 1 && temp <= 3) { return temp; }
	printf(" ♠ 오류메시지 - [ 1 ~ 3 ]사이의 숫자를 입력해주세요\n");
	return get_menu(text);
}
//MVP등급 받기
int get_MVP(char* text) {
	printf("\n   ※ 당신의 흑우력을 선택해주세여(MVP 등급)\n   ① 브론즈   ② 실버   ③ 골드   ④ 다이아   ⑤ 레드  ");
	int temp = get_int(text);
	if (temp >= 1 && temp <= 5) { return temp; }
	printf(" ♠ 오류메시지 - [ 1 ~ 5 ]사이의 숫자를 입력해주세요\n");
	return get_MVP(text);
}
