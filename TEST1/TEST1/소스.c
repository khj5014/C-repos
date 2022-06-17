#include <stdio.h>
#include<Windows.h>

void main() {
	
	system("mode con cols=50 lines=15");
	system("title 메이플 inform");
	system("color 3f");

	while (1)
	{
		int cho = 0;
		int i = 0;
		
			while (i != 10) {
				
				system("cls");

				printf(" ■■■■■■■■■■■■■■■■■■■\n");
				if (i % 2 == 0)	printf(" ■  ★  메이플 게임 정보 모음  ★   ■\n");
				else if(i % 2 == 1) printf(" ■  ☆  메이플 게임 정보 모음  ☆   ■\n");
				
				printf(" ■ 1. 결정석 값      5. 무토 레시피 ■\n");
				printf(" ■ 2. 링크 스킬      6. 탕윤 레시피 ■\n");
				printf(" ■ 3. 주흔 작        7. 종료        ■\n");
				printf(" ■ 4. 유니온                        ■\n");
				printf(" ■■■■■■■■■■■■■■■■■■■\n");
										
				Sleep(400);
					
				i++;
			}
			printf(" 메뉴 선택 : ");
			scanf_s("%d", &cho);

		switch (cho) {
		case 1:
			system("C:/Users/gmlwo/Desktop/test/cho1.png");			
			Sleep(100);
			break;
		case 2:
			system("C:/Users/gmlwo/Desktop/test/cho2.png");
			Sleep(100);
			break;
		case 3:
			system("C:/Users/gmlwo/Desktop/test/cho3.png");
			Sleep(100);
			break;
		case 4:
			{
				system("C:/Users/gmlwo/Desktop/test/cho4.png");
				system("C:/Users/gmlwo/Desktop/test/cho5.png");
			}
			Sleep(100);
			break;
		case 5:
			system("C:/Users/gmlwo/Desktop/test/cho6.png");
			Sleep(100);
			break;
		case 6:
			system("C:/Users/gmlwo/Desktop/test/cho7.png");
			Sleep(100);
			break;
		case 7:
			printf(" 3초 뒤 프로그램을 종료합니다\n");
			Sleep(1000);
			printf(" 3");
			Sleep(1000);
			printf(" 2");
			Sleep(1000);
			printf(" 1");
			return 0;
		}
	}
}